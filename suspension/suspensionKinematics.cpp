#include "suspensionKinematics.hpp"
using namespace SimTK;

Body::Rigid susp_properties(MassProperties(1.0, Vec3(0,1,0.5), Inertia(1)));
MultibodySystem(multibody_system);
SimbodyMatterSubsystem matter(multibody_system);
MobilizedBody::Ground ground(matter.getGround());
GeneralForceSubsystem forces(multibody_system);
Force::UniformGravity gravity(forces, matter, Vec3(0, 0, -9.8));
State state;

Wishbone::Wishbone() {
    wishbone_body = MobilizedBody::Free(ground, Transform(Vec3(0)), susp_properties, Transform(Vec3(0)));
}

void Wishbone::set_ib_fore_spherical(Vec3 coordinates) {
    ib_fore_spherical.setPointOnBody1(state, coordinates);
    ib_fore_spherical.setPointOnBody2(state, coordinates);
    fore_line.setPoint1(coordinates);
};

void Wishbone::set_ib_aft_spherical(Vec3 coordinates) {
    ib_aft_spherical.setPointOnBody1(state, coordinates);
    ib_aft_spherical.setPointOnBody2(state, coordinates);
    aft_line.setPoint1(coordinates);
};

void Wishbone::set_ob_spherical(Vec3 coordinates) {
    ob_spherical.setPointOnBody1(state, coordinates);
    ob_spherical.setPointOnBody2(state, coordinates);
    fore_line.setPoint2(coordinates);
    aft_line.setPoint2(coordinates);
};
/*
void Wishbone::setFrameCentroid() {
    Vec3 ib_fore = ib_fore_spherical.getPointOnBody1(state);
    Vec3 ib_aft = ib_aft_spherical.getPointOnBody1(state);
    Vec3 ob = ob_spherical.getPointOnBody1(state);

    Vec3 centroid;
    for (int index : {0, 1, 2})
        centroid[index] = (ib_fore[index] + ib_aft[index] + ob[index])/3.0;

    wishbone_body.setDefaultInboardFrame(Transform(centroid));
};
*/
void Wishbone::finalize() {
    fore_line.setColor(Vec3(255., 0., 0.));
    aft_line.setColor(Vec3(255., 0., 0.));
    wishbone_body.addBodyDecoration(Transform(), fore_line);
    wishbone_body.addBodyDecoration(Transform(), aft_line);
}

Suspension::Suspension()
 : top_wishbone(), bottom_wishbone()
{
    // Purely for visualisation (optional)
    Visualizer viz(multibody_system);
    viz.setSystemUpDirection(CoordinateAxis::ZCoordinateAxis());
    multibody_system.addEventReporter(new Visualizer::Reporter(viz, 0.01));

    upright = MobilizedBody::Free(ground, Transform(Vec3(0)), susp_properties, Transform(Vec3(0)));

    bottom_wishbone.ib_fore_spherical = Constraint::Ball(ground, Vec3(0), bottom_wishbone.wishbone_body, Vec3(0));
    bottom_wishbone.ib_aft_spherical = Constraint::Ball(ground, Vec3(0), bottom_wishbone.wishbone_body, Vec3(0));
    bottom_wishbone.ob_spherical = Constraint::Ball(upright, Vec3(0), bottom_wishbone.wishbone_body, Vec3(0));

    top_wishbone.ib_fore_spherical = Constraint::Ball(ground, Vec3(0), top_wishbone.wishbone_body, Vec3(0));
    top_wishbone.ib_aft_spherical = Constraint::Ball(ground, Vec3(0), top_wishbone.wishbone_body, Vec3(0));
    top_wishbone.ob_spherical = Constraint::Ball(upright, Vec3(0), top_wishbone.wishbone_body, Vec3(0));

    state = multibody_system.realizeTopology();
};

void Suspension::solve() {
    top_wishbone.finalize();
    bottom_wishbone.finalize();

    multibody_system.realizeTopology();
    state.setSystemTopologyStageVersion(1);
    multibody_system.setSystemTopologyCacheVersion(1);

    RungeKuttaMersonIntegrator integ(multibody_system);
    TimeStepper ts(multibody_system, integ);
    ts.initialize(state);
    ts.stepTo(50.0);
}

