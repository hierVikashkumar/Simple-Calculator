#include <iostream>
using namespace std;

void showMenu();
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main() {
    double number1, number2, result;
    char operation;
    bool continueCalculation = true;

    while (continueCalculation) {       
        showMenu();
        cout << "Enter the operation you want to perform (+, -, *, /): ";
        cin >> operation;
        cout << "Enter the first number: ";
        cin >> number1;
        cout << "Enter the second number: ";
        cin >> number2;
        switch (operation) {
            case '+':
                result = add(number1, number2);
                cout << "Result: " << number1 << " + " << number2 << " = " << result << endl;
                break;
            case '-':
                result = subtract(number1, number2);
                cout << "Result: " << number1 << " - " << number2 << " = " << result << endl;
                break;
            case '*':
                result = multiply(number1, number2);
                cout << "Result: " << number1 << " * " << number2 << " = " << result << endl;
                break;
            case '/':
                if (number2 != 0) {
                    result = divide(number1, number2);
                    cout << "Result: " << number1 << " / " << number2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Error: Invalid operation." << endl;
                break;
        }

        char continueChoice;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueChoice;
        if (continueChoice != 'y' && continueChoice != 'Y') {
            continueCalculation = false;
        }
    }

    cout << "Thank you for using the calculator. Goodbye!" << endl;
    return 0;
}

void showMenu() {
    cout << "\nSimple Calculator Menu" << endl;
    cout << "----------------------" << endl;
    cout << "Choose an operation:" << endl;
    cout << "+ : Addition" << endl;
    cout << "- : Subtraction" << endl;
    cout << "* : Multiplication" << endl;
    cout << "/ : Division" << endl;
}

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}