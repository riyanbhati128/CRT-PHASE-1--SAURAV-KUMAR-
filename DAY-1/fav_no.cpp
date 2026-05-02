#include <iostream>  // 1. Include library for input and output

int main() {         // 2. The entry point of every C++ program
    int num1, num2, sum;

    // 3. Get user input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // 4. Perform calculation
    sum = num1 + num2;

    // 5. Display the result
    std::cout << "The sum is: " << sum << std::endl;

    return 0;        // 6. Signal that the program finished successfully
}
