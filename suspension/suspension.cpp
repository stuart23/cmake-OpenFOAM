#include "Simbody.h"
using namespace SimTK;

int main() {
	MultibodySystem system;
	SimbodyMatterSubsystem matter(system);
	GeneralForceSubsystem forces(system);
	Force::UniformGravity gravity(forces, matter, Vec3(0, -9.8, 0));
	Body::Rigid pendulumBody(MassProperties(1.0, Vec3(0), Inertia(1)));
	MobilizedBody::Pin pendulum1(matter.Ground(), Transform(Vec3(0)),
			pendulumBody, Transform(Vec3(0,1,0)));
	MobilizedBody::Pin pendulum2(pendulum1, Transform(Vec3(0)),
			pendulumBody, Transform(Vec3(0,1,0)));

	system.realizeTopology();
	State state = system.getDefaultState();
	pendulum2.setRate(state, 5.0);


	RungeKuttaMersonIntegrator integ(system);
	TimeStepper ts(system, integ);
	ts.initialize(state);
	ts.stepTo(50.0);
}


