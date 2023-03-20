#include <rational/rational.hpp>

#include <iosfwd>
#include <iostream>


//////////////////////////////////////////////////////////////////////////////////normalize
int NOD(int32_t a, int32_t b) {
    while(a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}//реализуем нахождение НОД при помощи алгоритма Евклида

void Rational::normalize() noexcept{
numer = numer / NOD(numer, denomer);
denomer = denomer / NOD(numer, denomer);
}
Rational::Rational(int32_t num, int32_t denom) noexcept {
numer = num;
denomer = denom;
normalize();
}
//////////////////////////////////////////////////////////////////////////////////normalize

inline std::ostream& operator<<(std::ostream& ostrm, const Rational& o) noexcept{
return o.writeTo(ostrm);
}
inline std::ostream& Rational::writeTo(std::ostream& ostrm) const{
    return ostrm << numer << separator << denomer << std::endl;
}

inline std::istream& operator>>(std::istream& istrm, Rational& i) noexcept{
return i.readFrom(istrm);
}
std::istream& Rational::readFrom(std::istream& istrm){
    int32_t rfn(0);
    char comma(0);
    int32_t rfd(0);
    istrm >> rfn >> comma >> rfd;
    if (istrm.good()){
        if((Rational::separator == comma) && (check(rfn, rfd))){
            numer = rfn;
            denomer = rfd;
        }else{
            istrm.setstate(std::ios_base::failbit);
        }
    }
    normalize();
    return istrm;
}
//
bool Rational::check(int32_t a = 0, int32_t b = -1){
    if(b == 0 or b < 0){
        throw std::invalid_argument("input failure");
    } else {
        return true;
    }
}

inline Rational operator+(const Rational& lhs, const Rational& rhs) noexcept{
return Rational(lhs) += rhs;
}
inline Rational operator-(const Rational& lhs, const Rational& rhs) noexcept{
return Rational(lhs) -= rhs;
}
inline Rational operator*(const Rational& lhs, const Rational& rhs) noexcept{
return Rational(lhs) *= rhs;
}
inline Rational operator/(const Rational& lhs, const Rational& rhs){
    return Rational(lhs) /= rhs;
}


bool Rational::operator==(const Rational& rhs) const noexcept{
if(rhs.num() == numer && rhs.denom() == denomer)
return true;
else
return false;
}
bool Rational::operator!=(const Rational& rhs) const noexcept{
if(rhs.num() == numer && rhs.denom() == denomer)
return false;
else
return true;
}
bool Rational::operator<=(const Rational& rhs) const noexcept{
if(rhs.num() / rhs.denom() <= numer / denomer)
return true;
else
return false;
}
bool Rational::operator>=(const Rational& rhs) const noexcept{
if(rhs.num() / rhs.denom() >= numer / denomer)
return true;
else
return false;
}
bool Rational::operator<(const Rational& rhs) const noexcept{
if(rhs.num() / rhs.denom() < numer / denomer)
return true;
else
return false;
}
bool Rational::operator>(const Rational& rhs) const noexcept{
if(rhs.num() / rhs.denom() > numer / denomer){
return true;
}
else{
return false;
}
}

Rational &Rational::operator+=(const Rational& rhs) noexcept{
numer = (rhs.denomer * numer + rhs.numer * denomer) ;
denomer = rhs.denomer * denomer;
normalize();
return *this;
}
Rational &Rational::operator-=(const Rational& rhs) noexcept{
numer = rhs.num() * denomer - numer * rhs.denom();
denomer = rhs.denom() * denomer;
normalize();
return *this;
}
Rational &Rational::operator*=(const Rational& rhs) noexcept{
numer = rhs.numer * numer;
denomer = rhs.denomer * denomer;
normalize();
return *this;
}
Rational &Rational::operator/=(const Rational& rhs){
    if (rhs.num() != 0) {
        if (rhs.num() < 0)
            *this *= Rational(-(rhs.denomer), -rhs.numer);
        else
            *this *= Rational(rhs.denomer, rhs.numer);
        normalize();
        return *this;
    }
//    else {
//        throw std::invalid_argument( "do not use zero in denominator" );
//    }
}

//Rational::operator bool() const noexcept {
//    return false;
//}
//if(rhs.num() != 0){
//if(rhs.num() < 0){
//*this *= Rational(-rhs.denom(), -rhs.num());
//}
//else
//*this *= Rational(rhs.num(), rhs.denom());
//}
//normalize();
//return *this;
