/*
    Author:        0tt4v10
    Date:          20.06.2026
    Last Modified: 20.06.2026
    Title:         Calculator
    Description:   Terminal based calculator supporting +, -, *, / with
                   input validation and division by zero handling.
    Version:       v1.0.0
*/

#include <iostream>
#include <limits>
#include <iomanip>

int main () {
    float input1 = 0;
    float input2 = 0;
    char op = '\0';

    std::cout << "\n";
    std::cout << "Basic Terminal Based Calculator\n\n";

    std::cout << "Insert first Number: ";
    std::cin >> input1;
    std::cout << "\n";

    std::cout << "Choose a operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "\n";


    // Checks if operator is valid
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        std::cout << "Invalid Operator!\n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
        return 1;
    }

    std::cout << "Insert second Number: ";
    std::cin >> input2;
    std::cout << "\n";

    switch (op) {

        case '+':
            std::cout << "Your answer is: " << std::fixed << std::setprecision(2) << input1 + input2;
            break;

        case '-':
            std::cout << "Your answer is: " << std::fixed << std::setprecision(2) << input1 - input2;
            break;

        case '*':
            std::cout << "Your answer is: " << std::fixed << std::setprecision(2) << input1 * input2;
            break;

        case '/':
            // Checks if input 2 isn't divided through 0
            if (input2 == 0) {
                std::cout << "Can't divide through 0!";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
                return 1;
            }
            std::cout << "Your answer is: " << std::fixed << std::setprecision(2) << input1 / input2;
            std::cout << "\n";
            break;

        default:
            std::cout << "Invalid Second Number!";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            return 1;

    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
