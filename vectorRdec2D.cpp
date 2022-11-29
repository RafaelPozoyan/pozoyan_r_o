#include <iostream>
#include <math.h>

struct Rdec2D {
	double x = 0;
	double y = 0;
};

//------------------------------------------
//============================================================= ОПРЕДЕЛЕНИЕ ФУНКЦИИ
std::ostream& operator  << (std::ostream& ostrm, const Rdec2D& z) {
	return ostrm << "(" << z.x << "," << z.y << ")";
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
//============================================================= ОПРЕДЕЛЕНИЕ ФУНКЦИИ
//-----------------------------------------
// 
// 
//-----------------------------------------
//============================================================= ФУНКЦИИ
double skalyar_proizv(const Rdec2D& fst, const Rdec2D& scd) { /*скалярное произведение векторов*/
	return { fst.x * scd.x + fst.y * scd.y };
}
double dlina_vectora(const Rdec2D& fst) { /*длина вектора*/
	return { sqrt(pow(fst.x, 2) + pow(fst.y, 2)) };
}
//============================================================= ФУНКЦИИ
// ---------------------------------------- 


int main() {
	Rdec2D z1{ 0.0, 0.0 };
	Rdec2D z2{ 4.0, 3.0 };
	int a = 2;
	std::cout << "skalyarnoe proizvedenie = " << skalyar_proizv(z1, z2) << ";" << '\n';
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "dlina vectora = " << dlina_vectora(z1) << ";" << '\n';
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "proizvedenie na chislo : z1 * a = " << z1 * a << ";" << '\n';

}


//------------------------------------------
//============================================================= ОБЪЯВЛЕНИЕ ФУНКЦИИ
std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& z);

Rdec2D operator+(const Rdec2D& fst, const Rdec2D& scd);

Rdec2D operator-(const Rdec2D& fst, const Rdec2D& scd);

Rdec2D operator*(const Rdec2D& fst, const double& a);
//============================================================= ОБЪЯВЛЕНИЕ ФУНКЦИИ
//------------------------------------------
