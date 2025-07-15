#include <iostream>
#include <cmath>

int main()
{
    double number1;
    double number2;
    double result;
    char operation;

    // get user input
    std::cout << "Enter First Number: ";
    std::cin >> number1;

    std::cout << "Enter operation (+, -, , /, ^, r): ";
    std::cin >> operation;

    // any root of a number
    if (operation == 'r')
    {
        std::cout << "Enter root degree: ";
        std::cin >> number2;

        result = pow(number1, 1.0 / number2);
        std::cout << number2 << "th root of " << number1 << " is: " << result << std::endl;

        return 0;
    }

    std::cout << "Enter Second Number: ";
    std::cin >> number2;

    // if else statement checking entered operation
    if (operation == '+')
    {
        result = number1 + number2;
    }

    else if (operation == '-')
    {
        result = number1 - number2;
    }

    else if (operation == '*')
    {
        result = number1 * number2;
    }

    else if (operation == '/')
    {
        result = number1 / number2;
    }

    else if (operation == '^')
    {
        result = pow(number1, number2);
    }

    else
    {
        std::cout << "I havent worked on this";
        return 1;
    }

    std::cout << "  " << result << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// 
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file