#include <iostream>
#include <iomanip>

int main() {
    int integer;
    long longInteger;
    char character;
    float floatingPoint;
    double doublePrecision;

    // Read input values
    std::cin >> integer >> longInteger >> character >> floatingPoint >> doublePrecision;

    // Print each element on a new line with specified formatting
    std::cout << integer << std::endl;
    std::cout << longInteger << std::endl;
    std::cout << character << std::endl;
    std::cout << std::fixed << std::setprecision(3) << floatingPoint << std::endl;
    std::cout << std::fixed << std::setprecision(9) << doublePrecision << std::endl;

    return 0;
}