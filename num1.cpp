#include <iostream>
#include <cmath>


int main() {
	int sum = 0;
	const double eps = 0.0001;
	int fac = 1;
	int i = 0;
	for (int j = 1; j <= i * 2; j++) {
		fac *= i;
	}
	for (double x = 0.1; x <= 1; x += 0.05) {
		if (pow(x, 2 * i) / fac >= 0.0001) {
			long double a = pow(x, 2 * i) / fac;
			sum += a;
			std::cout << x << " | " << pow(x, 2 * i) / fac << std::endl;
		}
		else {
			break;
		}
		i += 1;
	}
}
