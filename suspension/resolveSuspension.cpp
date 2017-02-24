#include "suspensionKinematics.hpp"
using namespace SimTK;

int main() {
    Suspension suspension;

    suspension.top_wishbone.set_ib_fore_spherical(Vec3(-0.3, 0.25, 0.6));
    suspension.top_wishbone.set_ib_aft_spherical(Vec3(0.3, 0.25, 0.6));
    suspension.top_wishbone.set_ob_spherical(Vec3(0.0, 0.8, 0.6));

    suspension.bottom_wishbone.set_ib_fore_spherical(Vec3(-0.3, 0.25, 0.2));
    suspension.bottom_wishbone.set_ib_aft_spherical(Vec3(0.3, 0.25, 0.2));
    suspension.bottom_wishbone.set_ob_spherical(Vec3(0.0, 0.8, 0.2));

    suspension.solve();
}


