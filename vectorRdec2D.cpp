#include <iostream>
#include <math.h>

struct Rdec2D {
	double x = 0;
	double y = 0;
};

//------------------------------------------
//============================================================= ОПРЕДЕЛЕНИЕ ФУНКЦИИ
std::ostream& operator  << (std::ostream& ostrm, const Rdec2D& z) { /*оператор вывода*/
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
 

//-----------------------------------------
//============================================================= ФУНКЦИИ
double skalar_product(const Rdec2D& fst, const Rdec2D& scd) { /*скалярное произведение векторов*/
	return { fst.x * scd.x + fst.y * scd.y };
}
double vector_length(const Rdec2D& fst) { /*длина вектора*/
	return { sqrt(pow(fst.x, 2) + pow(fst.y, 2)) };
}
//============================================================= ФУНКЦИИ
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
	std::cout << "scalar product = " << skalar_product(z1, z2) << ";" << '\n';
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "vector z1 length = " << vector_length(z1) << ";" << '\n';
	std::cout << "vector z2 length = " << vector_length(z2) << ";" << '\n';
	std::cout << "------------------------------------------------------------" << '\n';
	std::cout << "multiplication by number: z1 * a = " << z1 * a << ";" << '\n';
	std::cout << "multiplication by number: z2 * a = " << z2 * a << ";" << '\n';
	std::cout << "============================================================" << '\n';
}


//------------------------------------------
//============================================================= ОБЪЯВЛЕНИЕ ФУНКЦИИ
std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& z);

Rdec2D operator+(const Rdec2D& fst, const Rdec2D& scd);

Rdec2D operator-(const Rdec2D& fst, const Rdec2D& scd);

Rdec2D operator*(const Rdec2D& fst, const double& a);
//============================================================= ОБЪЯВЛЕНИЕ ФУНКЦИИ
//------------------------------------------
