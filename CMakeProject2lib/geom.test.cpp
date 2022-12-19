#include <geom/geom.hpp>

#include <iostream>
#include <cmath>

//-----------------------------------------
//============================================================= 
double dot(const Rdec2D& fst, const Rdec2D& scd) {
	return { fst.x * scd.x + fst.y * scd.y };
}
double norm(const Rdec2D& fst) {
	return { sqrt(pow(fst.x, 2) + pow(fst.y, 2)) };
}
void polar_system(struct Rdec2D& pol) {
	std::cout << "polar system: " << "Radious = " << sqrt(pol.x + pol.y) << ", Phi = " << tan(pol.y / pol.x) << ";" << '\n';
	std::cout << "============================================================" << '\n';
}
//=============================================================
// ---------------------------------------- 

int main() {
	Rdec2D z1{ 2.0, 6.0 };
	Rdec2D z2{ 4.0, 3.0 };
	int a = 0;
	std::cout << "enter a number:";
	std::cin >> a;
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "vector z1:" << z1 << '\n';
	std::cout << "vector z2:" << z2 << '\n';
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "scalar product = " << dot(z1, z2) << ";" << '\n';
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "vector z1 length = " << norm(z1) << ";" << '\n';
	std::cout << "vector z2 length = " << norm(z2) << ";" << '\n';
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "multiplication by number: z1 * a = " << z1 * a << ";" << '\n';
	std::cout << "multiplication by number: z2 * a = " << z2 * a << ";" << '\n';
	std::cout << "============================================================" << '\n';
	polar_system(z1);
}
