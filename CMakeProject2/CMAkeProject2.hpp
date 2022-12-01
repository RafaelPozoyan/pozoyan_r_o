#include <iosfwd>

struct Rdec2D {
	double x;
	double y;	
};

struct Rpol2D {
	double r;
	double phi;
};

//------------------------------------------
//============================================================= ÎÁÚßÂËÅÍÈÅ ÔÓÍÊÖÈÈ
std::ostream& operator <<(std::ostream& ostrm, const Rdec2D& z);

std::ostream& operator <<(std::ostream& ostrm, const Rpol2D& z);

Rdec2D operator+(const Rdec2D& fst, const Rdec2D& scd);

Rdec2D operator-(const Rdec2D& fst, const Rdec2D& scd);

Rdec2D operator*(const Rdec2D& fst, const double& a);
//============================================================= ÎÁÚßÂËÅÍÈÅ ÔÓÍÊÖÈÈ
//------------------------------------------