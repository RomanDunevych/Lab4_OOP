#include "RealNumber.h"
#include <iostream>

int main() {
    RealNumber a, b;

    std::cout << "Enter first real number: ";
    std::cin >> a;
    std::cout << "Enter second real number: ";
    std::cin >> b;

    RealNumber sum = a + b;
    RealNumber product = a * b;
    RealNumber difference = a - b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}
