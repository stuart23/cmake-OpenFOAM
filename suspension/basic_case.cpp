#include "Simbody.h"
using namespace SimTK;

Body::Rigid susp_properties(MassProperties(1.0, Vec3(0), Inertia(1)));
MultibodySystem(multibody_system);
SimbodyMatterSubsystem matter(multibody_system);
MobilizedBody::Ground ground(matter.getGround());

class Wishbone{
    public:
        Wishbone();

	MobilizedBody::Free wishbone_body;
        Constraint::Ball ib_fore_spherical;

        void set_ib_fore_spherical( Vec3 );
};

Wishbone::Wishbone() { wishbone_body = MobilizedBody::Free(ground, Transform(Vec3(0)), susp_properties, Transform(Vec3(0))); }

void Wishbone::set_ib_fore_spherical(Vec3 coordinates) {
    ib_fore_spherical.setPointOnBody1(state, coordinates);
    ib_fore_spherical.setPointOnBody2(state, coordinates);
};

class Suspension{
    public:
        Wishbone top_wishbone;
        Wishbone bottom_wishbone;
        MobilizedBody::Free upright;
     
        Suspension();
};

Suspension::Suspension()
 : top_wishbone(), bottom_wishbone()
{
    upright = MobilizedBody::Free(ground, Transform(Vec3(0,1,0)), susp_properties, Transform(Vec3(0)));

    bottom_wishbone.ib_fore_spherical = Constraint::Ball(ground, Vec3(0), bottom_wishbone.wishbone_body, Vec3(0));

    top_wishbone.ib_fore_spherical = Constraint::Ball(ground, Vec3(0), top_wishbone.wishbone_body, Vec3(0));

    state = multibody_system.realizeTopology();
};


int main() {
    Suspension suspension;
  
 
    suspension.top_wishbone.set_ib_fore_spherical(Vec3(-0.3, 0.25, 0.6));
    suspension.top_wishbone.set_ib_aft_spherical(Vec3(0.3, 0.25, 0.6));
    suspension.top_wishbone.set_ob_spherical(Vec3(0.0, 0.8, 0.6));

    suspension.bottom_wishbone.set_ib_fore_spherical(Vec3(-0.3, 0.25, 0.2));
    suspension.bottom_wishbone.set_ib_aft_spherical(Vec3(0.3, 0.25, 0.2));
    suspension.bottom_wishbone.set_ob_spherical(Vec3(0.0, 0.8, 0.2));

    std::cout << suspension.top_wishbone.ib_fore_spherical.getPointOnBody1(state) << "\n\n";

    // Purely for visualisation (optional)
    Visualizer viz(multibody_system);
    viz.setSystemUpDirection(CoordinateAxis::ZCoordinateAxis());
    multibody_system.addEventReporter(new Visualizer::Reporter(viz, 0.01));


    std::cout << state.getSystemStage() << "SYS STAGE\n\n";
    std::cout << multibody_system.getSystemTopologyCacheVersion() << "CACHE VERSION\n\n";
    // RESULT = 2
    std::cout << state.getSystemTopologyStageVersion() << "STAGE VERSION\n\n";
    // RESULT = 1
    // Finalizes the geometry
    multibody_system.realizeTopology();
    std::cout << suspension.top_wishbone.ib_fore_spherical.getPointOnBody1(state) << "\n\n";
    multibody_system.realize(state);
    multibody_system.realizeModel(state);
    multibody_system.realizeTopology();
    std::cout << suspension.top_wishbone.ib_fore_spherical.getPointOnBody1(state) << "\n\n";

/*
    RungeKuttaMersonIntegrator integ(multibody_system);
    TimeStepper ts(multibody_system, integ);
    ts.initialize(state);
    ts.stepTo(50.0);
    */
}


