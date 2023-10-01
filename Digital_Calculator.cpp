#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;

int main() {
    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        mp::cpp_int num1, num2, result;

        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                std::cout << "Result: " << result << std::endl;
                break;
            case 2:
                result = num1 - num2;
                std::cout << "Result: " << result << std::endl;
                break;
            case 3:
                result = num1 * num2;
                std::cout << "Result: " << result << std::endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << "Result: " << result << std::endl;
                } else {
                    std::cout << "Division by zero is not allowed." << std::endl;
                }
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
                break;
        }
    }

    return 0;
}