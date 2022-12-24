#include <iostream>
#include <cmath>
long fac(int a){
    long long aaa = 1;
    for(int i = 1; i <= a; i++){
        aaa *= i;
    }
    return aaa;
}

int main() {
    const double eps = 0.0001;

    for (double x = 0.1; x <= 1.05; x += 0.05) {
        int i = 0;
        double sum = 0;
        long double a = std::pow(x, 2 * i) / fac(i * 2);

        while (a >= eps){
            sum += a;
            i += 1;
            a = std::pow(x, 2 * i) / fac(i * 2);
        }
        std::cout << x << " | " << sum << std::endl;
    }
}
