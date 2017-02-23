#include "Simbody.h"
using namespace SimTK;

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
	system.addEventReporter(new Visualizer::Reporter(viz, 0.01));

	// Finalizes the geometry
	system.realizeTopology();
	State state = system.getDefaultState();


	RungeKuttaMersonIntegrator integ(system);
	TimeStepper ts(system, integ);
	ts.initialize(state);
	ts.stepTo(50.0);
}


