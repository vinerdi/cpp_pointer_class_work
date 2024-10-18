#include <iostream>
#include <functional>

// Function prototypes
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

int main() {
    // Array of function pointers
    std::function<double(double, double)> operations[] = { add, subtract, multiply, divide };

    double num1, num2;
    int choice;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Select operation:\n";
    std::cout << "0: Add\n";
    std::cout << "1: Subtract\n";
    std::cout << "2: Multiply\n";
    std::cout << "3: Divide\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    if (choice >= 0 && choice <= 3) {
        double result = operations[choice](num1, num2);
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cerr << "Invalid choice!" << std::endl;
    }

    return 0;
}