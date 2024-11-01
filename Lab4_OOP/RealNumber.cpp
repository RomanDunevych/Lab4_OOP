#include "RealNumber.h"

RealNumber::RealNumber() : value(0.0) {}

RealNumber::RealNumber(double v) : value(v) {}

RealNumber::RealNumber(const RealNumber& other) : value(other.value) {}

RealNumber RealNumber::operator*(const RealNumber& other) const {
    return RealNumber(value * other.value);
}

RealNumber RealNumber::operator+(const RealNumber& other) const {
    return RealNumber(value + other.value);
}

RealNumber operator-(const RealNumber& lhs, const RealNumber& rhs) {
    return RealNumber(lhs.value - rhs.value);
}

std::ostream& operator<<(std::ostream& out, const RealNumber& num) {
    out << num.value;
    return out;
}

std::istream& operator>>(std::istream& in, RealNumber& num) {
    in >> num.value;
    return in;
}
