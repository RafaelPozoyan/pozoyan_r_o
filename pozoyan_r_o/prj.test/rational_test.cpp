#include <iostream>

#include <rational/rational.hpp>

int main() {
    Rational a, b;
    std::cin >> a >> b;
    std::cout << a << b;
    std::cout << a / b;
}