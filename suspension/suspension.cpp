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
	Force::UniformGravity gravity(forces, matter, Vec3(0, -9.8, 0));
	// Mass = 1kg, CoG at 0,0,0 and 1kgm^2 rotational inertia in all 3 axis
	Body::Rigid pendulumBody(MassProperties(1.0, Vec3(0), Inertia(1)));
	// Adding the joints. The joint is a pin joint between ground (first arg) and an INSTANCE
	// of pendulumBody (therefore used in both lines)
	// 2nd and 4th args define joint position and orientation
	MobilizedBody::Pin pendulum1(matter.Ground(), Transform(Vec3(0)),
			pendulumBody, Transform(Vec3(0,1,0)));
	MobilizedBody::Pin pendulum2(pendulum1, Transform(Vec3(0)),
			pendulumBody, Transform(Vec3(0,1,0)));

	// Purely for visualisation (optional)
	Visualizer viz(system);
	system.addEventReporter(new Visualizer::Reporter(viz, 0.01));

	// Finalizes the geometry
	system.realizeTopology();
	State state = system.getDefaultState();
	pendulum2.setRate(state, 5.0);


	RungeKuttaMersonIntegrator integ(system);
	TimeStepper ts(system, integ);
	ts.initialize(state);
	ts.stepTo(50.0);
}


