#include "Simbody.h"
using namespace SimTK;

class Wishbone{
    public:
        Wishbone();

	void PublishPickup();
	MobilizedBody::Free wishbone_body;
        Constraint::Ball ib_fore_spherical;
        Constraint::Ball ib_aft_spherical;
        Constraint::Ball ob_spherical;

        void set_ib_fore_spherical( Vec3 );
        void set_ib_aft_spherical( Vec3 );
        void set_ob_spherical( Vec3 );
};

class Suspension{
    public:
        Wishbone top_wishbone;
        Wishbone bottom_wishbone;
        MobilizedBody::Free upright;
     
        Suspension();
	void solve();
};

