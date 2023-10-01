#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    while (true) {
        cout << "Menu-Driven Calculator" << endl;
        cout << "Choose an operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Exit" << endl;

        cin >> operation;

        if (operation == '5') {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (operation < '1' || operation > '4') {
            cout << "Invalid input. Please select a valid operation." << endl;
            continue;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '1':
                cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case '2':
                cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case '3':
                cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case '4':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation." << endl;
        }
    }

    return 0;
}