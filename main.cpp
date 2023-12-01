#include <iostream> // 1
#include "Calculator.h" // 2

int main() { // 3
    Calculator calc; // 4
    double a, b; // 5
    char op; // 6

    std::cout << "Enter expression (e.g. 5 * 4): "; // 7
    std::cin >> a >> op >> b; // 8

    switch (op) { // 9
        case '+': std::cout << "Result: " << calc.add(a, b); break; // 10
        case '-': std::cout << "Result: " << calc.subtract(a, b); break; // 11
        case '*': std::cout << "Result: " << calc.multiply(a, b); break; // 12
        case '/': std::cout << "Result: " << calc.divide(a, b); break; // 13
        default: std::cout << "Invalid operation!"; // 14
    }

    return 0; // 15
}
