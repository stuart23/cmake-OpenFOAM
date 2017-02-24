#include "Simbody.h"
using namespace SimTK;

Body::Rigid susp_properties(MassProperties(1.0, Vec3(0), Inertia(1)));
MultibodySystem(multibody_system);
SimbodyMatterSubsystem matter(multibody_system);
GeneralForceSubsystem forces(multibody_system);
Force::UniformGravity gravity(forces, matter, Vec3(0, 0, -9.8));
State state = multibody_system.getDefaultState();

class Wishbone{
    public:
        Wishbone();

        MobilizedBody wishbone_body;
        Constraint::Ball ib_fore_spherical;
        Constraint::Ball ib_aft_spherical;
        Constraint::Ball ob_spherical;

        void set_ib_fore_spherical( Vec3 );
        void set_ib_aft_spherical( Vec3 );
        void set_ob_spherical( Vec3 );
};

Wishbone::Wishbone() {
    MobilizedBody::Free wishbone_body(matter.Ground(), Transform(Vec3(0)), susp_properties, Transform(Vec3(0)));
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

class Suspension{
    private:
        Wishbone top_wishbone;
        Wishbone bottom_wishbone;
        MobilizedBody::Free upright;
     
    public:
        Suspension();
};

Suspension::Suspension(){
    top_wishbone = Wishbone;   
    bottom_wishbone = Wishbone;   
	upright = MobilizedBody::Free(matter.Ground(), Transform(Vec3(0)), susp_properties, Transform(Vec3(0)));

};


int main() {
    Suspension suspension();

    suspension.top_wishbone.set_ib_fore_spherical(Vec3(-0.3, 0.25, 0.6));
    suspension.top_wishbone.set_ib_aft_spherical(Vec3(0.3, 0.25, 0.6));
    suspension.top_wishbone.set_ob_spherical(Vec3(0.0, 0.8, 0.6));

    suspension.bottom_wishbone.set_ib_fore_spherical(Vec3(-0.3, 0.25, 0.2));
    suspension.bottom_wishbone.set_ib_aft_spherical(Vec3(0.3, 0.25, 0.2));
    suspension.bottom_wishbone.set_ob_spherical(Vec3(0.0, 0.8, 0.2));

    /*
    MobilizedBody::Free top_wishbone(matter.Ground(), Transform(Vec3(0)), suspension, Transform(Vec3(0)));

    Constraint::Ball top_fore_spherical(matter.Ground(), Vec3(0.1,0,0.5), top_wishbone, Vec3(0.1,0,0.5));
    Constraint::Ball top_aft_spherical(matter.Ground(), Vec3(-0.1,0,0.5), top_wishbone, Vec3(-0.1,0,0.5));

    MobilizedBody::Free bottom_wishbone(matter.Ground(), Transform(Vec3(0)), suspension, Transform(Vec3(0)));

    Constraint::Ball bottom_fore_spherical(matter.Ground(), Vec3(0.1,0,0.3), bottom_wishbone, Vec3(0.1,0,0.3));
    Constraint::Ball bottom_aft_spherical(matter.Ground(), Vec3(-0.1,0,0.3), bottom_wishbone, Vec3(-0.1,0,0.3));

    MobilizedBody::Free upright(matter.Ground(), Transform(Vec3(0)), suspension, Transform(Vec3(0)));

    Constraint::Ball top_ob_spherical(bottom_wishbone, Vec3(0.0,0.5,0.5), upright, Vec3(0.0,0.5,0.5));
    Constraint::Ball bottom_ob_spherical(top_wishbone, Vec3(-0.0,0.5,0.3), upright, Vec3(-0.0,0.5,0.3));
*/
    // Purely for visualisation (optional)
    Visualizer viz(multibody_system);
    viz.setSystemUpDirection(CoordinateAxis::ZCoordinateAxis());
    multibody_system.addEventReporter(new Visualizer::Reporter(viz, 0.01));

    // Finalizes the geometry
    multibody_system.realizeTopology();


    RungeKuttaMersonIntegrator integ(multibody_system);
    TimeStepper ts(multibody_system, integ);
    ts.initialize(state);
    ts.stepTo(50.0);
}


