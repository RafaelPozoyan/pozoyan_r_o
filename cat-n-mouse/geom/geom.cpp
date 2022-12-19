#include "geom.hpp"

#include <iostream>
#include <cmath>

//------------------------------------------
//============================================================= ОПРЕДЕЛЕНИЕ ФУНКЦИИ
std::ostream& operator  <<(std::ostream& ostrm, const Rdec2D& z) { /*оператор вывода Декартовой системы*/
	return ostrm << "(" << z.x << "," << z.y << ")";
}

std::ostream& operator  <<(std::ostream& ostrm, const Rpol2D& z) { /*оператор вывода полярнной системы*/
	return ostrm << z.r << "," << z.phi;
}

Rdec2D operator*(const Rdec2D& fst, const double& a) {
	return { fst.x * a, fst.y * a };
}

Rdec2D operator-(const Rdec2D& fst, const Rdec2D& scd) {
	return { fst.x - scd.x, fst.y - scd.y };
}

Rdec2D operator+(const Rdec2D& fst, const Rdec2D& scd) {
	return { fst.x + scd.x, fst.y + scd.y };
}

//Rdec2D operator==(const Rdec2D& fst, const Rdec2D& scd) {
//	return { fst.x == scd.x, fst.y == scd.y };
//}
//============================================================= ОПРЕДЕЛЕНИЕ ФУНКЦИИ
//-----------------------------------------