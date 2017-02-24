#include "suspensionKinematics.hpp"
using namespace SimTK;

Body::Rigid susp_properties(MassProperties(1.0, Vec3(0), Inertia(1)));
MultibodySystem(multibody_system);
SimbodyMatterSubsystem matter(multibody_system);
MobilizedBody::Ground ground(matter.getGround());
GeneralForceSubsystem forces(multibody_system);
Force::UniformGravity gravity(forces, matter, Vec3(0, 0, -9.8));
State state;

Wishbone::Wishbone() {
    wishbone_body = MobilizedBody::Free(ground, Transform(Vec3(0)), susp_properties, Transform(Vec3(0)));
}

void Wishbone::PublishPickup() {
    std::cout << ib_fore_spherical.getPointOnBody1(state) << "\n\n";
}

void Wishbone::set_ib_fore_spherical(Vec3 coordinates) {
    ib_fore_spherical.setPointOnBody1(state, coordinates);
    ib_fore_spherical.setPointOnBody2(state, coordinates);
};

void Wishbone::set_ib_aft_spherical(Vec3 coordinates) {
    ib_aft_spherical.setPointOnBody1(state, coordinates);
    ib_aft_spherical.setPointOnBody2(state, coordinates);
};

void Wishbone::set_ob_spherical(Vec3 coordinates) {
    ob_spherical.setPointOnBody1(state, coordinates);
    ob_spherical.setPointOnBody2(state, coordinates);
};

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
    multibody_system.realizeTopology();

    RungeKuttaMersonIntegrator integ(multibody_system);
    TimeStepper ts(multibody_system, integ);
    ts.initialize(state);
    ts.stepTo(50.0);
}

