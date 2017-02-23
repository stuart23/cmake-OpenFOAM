#include "Simbody.h"
using namespace SimTK;

class Suspension{
    private:
        MultibodySystem system;
        State state;

        MobilizedBody top_wishbone;
        MobilizedBody bottom_wishbone;
        MobilizedBody upright;
        Constraint::Ball top_ib_fore_spherical;
        Constraint::Ball top_ib_aft_spherical;
        Constraint::Ball top_ob_spherical;
        Constraint::Ball bottom_ib_fore_spherical;
        Constraint::Ball bottom_ib_aft_spherical;
        Constraint::Ball bottom_ob_spherical;
     
    public:
        Suspension();
        void set_top_ib_fore_spherical(Vec3);
        void set_top_ib_aft_spherical(Vec3);
        void set_top_ob_spherical(Vec3);
        void set_bottom_ib_fore_spherical(Vec3);
        void set_bottom_ib_aft_spherical(Vec3);
        void set_bottom_ob_spherical(Vec3);
};

Suspension::Suspension(){
   
    MultibodySystem(system);
    state = system.getDefaultState();

};

void Suspension::set_top_ib_fore_spherical(Vec3 coordinates) {
	top_ib_fore_spherical.setPointOnBody1(state, coordinates);
};


int main() {
    // Create the system
    MultibodySystem system;
    // The physical bodies in the system (required)
    SimbodyMatterSubsystem matter(system);
    // Forces in the system (not required)
    GeneralForceSubsystem forces(system);
    // Gravity (not required apparently)
    Force::UniformGravity gravity(forces, matter, Vec3(0, 0, -9.8));
    // Mass = 1kg, CoG at 0,0,0 and 1kgm^2 rotational inertia in all 3 axis
    Body::Rigid suspension(MassProperties(1.0, Vec3(0), Inertia(1)));
    
    MobilizedBody::Free top_wishbone(matter.Ground(), Transform(Vec3(0)), suspension, Transform(Vec3(0)));

    Constraint::Ball top_fore_spherical(matter.Ground(), Vec3(0.1,0,0.5), top_wishbone, Vec3(0.1,0,0.5));
    Constraint::Ball top_aft_spherical(matter.Ground(), Vec3(-0.1,0,0.5), top_wishbone, Vec3(-0.1,0,0.5));

    MobilizedBody::Free bottom_wishbone(matter.Ground(), Transform(Vec3(0)), suspension, Transform(Vec3(0)));

    Constraint::Ball bottom_fore_spherical(matter.Ground(), Vec3(0.1,0,0.3), bottom_wishbone, Vec3(0.1,0,0.3));
    Constraint::Ball bottom_aft_spherical(matter.Ground(), Vec3(-0.1,0,0.3), bottom_wishbone, Vec3(-0.1,0,0.3));

    MobilizedBody::Free upright(matter.Ground(), Transform(Vec3(0)), suspension, Transform(Vec3(0)));

    Constraint::Ball top_ob_spherical(bottom_wishbone, Vec3(0.0,0.5,0.5), upright, Vec3(0.0,0.5,0.5));
    Constraint::Ball bottom_ob_spherical(top_wishbone, Vec3(-0.0,0.5,0.3), upright, Vec3(-0.0,0.5,0.3));

    // Purely for visualisation (optional)
    Visualizer viz(system);
    viz.setSystemUpDirection(CoordinateAxis::ZCoordinateAxis());
    system.addEventReporter(new Visualizer::Reporter(viz, 0.01));

    // Finalizes the geometry
    system.realizeTopology();
    State state = system.getDefaultState();


    RungeKuttaMersonIntegrator integ(system);
    TimeStepper ts(system, integ);
    ts.initialize(state);
    ts.stepTo(50.0);
}


