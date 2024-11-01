#pragma once
#include <iostream>

class RealNumber {
private:
    double value;

public:
    RealNumber();
    RealNumber(double v);
    RealNumber(const RealNumber& other);

    // �������� �� ������ �����
    RealNumber operator*(const RealNumber& other) const;
    RealNumber operator+(const RealNumber& other) const;

    // �������� �������� �� ������ �������
    friend RealNumber operator-(const RealNumber& lhs, const RealNumber& rhs);

    // ������� �������� ��������-���������
    friend std::ostream& operator<<(std::ostream& out, const RealNumber& num);
    friend std::istream& operator>>(std::istream& in, RealNumber& num);
};
