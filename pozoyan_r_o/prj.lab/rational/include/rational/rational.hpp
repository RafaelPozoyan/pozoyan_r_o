#ifndef POZOYAN_R_O_RATIONAL_HPP
#define POZOYAN_R_O_RATIONAL_HPP

#endif //POZOYAN_R_O_RATIONAL_HPP

#include <iosfwd>
#include <iostream>

class Rational{
    public:
        Rational()= default;//конструкторы
        Rational(const Rational&) = default;
        Rational(Rational&&)= default;
        ~Rational() = default;
        Rational(int32_t numer, int32_t denomer) noexcept;
        Rational& operator=(const Rational&) = default;
        Rational& operator=(Rational&&) = default;

        [[nodiscard]] int32_t num() const noexcept {return numer;}
        [[nodiscard]] int32_t denom() const noexcept {return denomer;}

        bool operator==(const Rational&) const noexcept;
        bool operator!=(const Rational&) const noexcept;
        bool operator<=(const Rational&) const noexcept;
        bool operator>=(const Rational&) const noexcept;
        bool operator<(const Rational&) const noexcept;
        bool operator>(const Rational&) const noexcept;

        explicit operator bool() const noexcept;

        Rational &operator+=(const Rational& rhs) noexcept;
        Rational &operator-=(const Rational& rhs) noexcept;
        Rational &operator*=(const Rational& rhs) noexcept;
        Rational &operator/=(const Rational& rhs);


        std::istream& operator>>(std::istream& istrm) noexcept;
    private:
        int32_t numer = 0;
        int32_t denomer = 1;
    private:
        void normalize() noexcept;
};



