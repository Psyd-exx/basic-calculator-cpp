# include <iostream>
# include <cmath>

using namespace std;

int add(int numberOne, int numberTwo)
{
    return numberOne + numberTwo;
}

int subtract(int numberOne, int numberTwo)
{
    return numberOne - numberTwo;
}

int multiply(int numberOne, int numberTwo)
{
    return numberOne * numberTwo;
}

int divide(int numberOne, int numberTwo)
{
    // An error handler if the second number is zero, since you cannot divide a number by zero
    if (numberTwo == 0) {
        cout << "Cannot divide by zero! \n";
        return 0;
    }
    return numberOne / numberTwo;
}

int square(int numberOne)
{
    return numberOne * numberOne;
}

int squareRoot(int numberOne)
{
    return sqrt(numberOne);
}

int exponent(int numberOne, int numberTwo)
{
    int tmp {numberOne};
    for (int i=0; i<numberTwo-1; i++) {
        tmp = tmp * numberOne;
    }
    return tmp;
}

int main()
{
    int numberOne {};
    int numberTwo {};
    int userChoice {0};
    int result {0};

    cout << "\nWelcome to Sinan's cool C++ Calculator!\n";
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";

    while (userChoice != 8) {
        cout << "\n(1) Add two numbers\n";
        cout << "(2) Subtract two numbers\n";
        cout << "(3) Multiply two numbers\n";
        cout << "(4) Divide two numbers\n";
        cout << "(5) Square a number\n";
        cout << "(6) Square root of a number\n";
        cout << "(7) Number one raised to the power of number two\n";
        cout << "(8) Exit\n";
        cout << "\nPlease input here: ";
        cin >> userChoice;

        switch (userChoice) {
            case 1:
                cout << "Input the first number: ";
                cin >> numberOne;
                cout << "Input the second number: ";
                cin >> numberTwo;
                result = add(numberOne, numberTwo);
                cout << "RESULT -> " << result << "\n";
                break;
            case 2:
                cout << "Input the first number: ";
                cin >> numberOne;
                cout << "Input the second number: ";
                cin >> numberTwo;
                result = subtract(numberOne, numberTwo);
                cout << "RESULT -> " << result << "\n";
                break;
            case 3:
                cout << "Input the first number: ";
                cin >> numberOne;
                cout << "Input the second number: ";
                cin >> numberTwo;
                result = multiply(numberOne, numberTwo);
                cout << "RESULT -> " << result << "\n";
                break;
            case 4:
                cout << "Input the first number: ";
                cin >> numberOne;
                cout << "Input the second number: ";
                cin >> numberTwo;
                result = divide(numberOne, numberTwo);
                if (result == -1) {
                    cout << "Cannot divide by zero! \n";
                } else {
                    cout << "RESULT -> " << result << "\n";
                }
                break;
            case 5:
                cout << "Input the number to square: ";
                cin >> numberOne;
                result = square(numberOne);
                cout << "RESULT -> " << result << "\n";
                break;
            case 6:
                cout << "Input the number to take the square root of: ";
                cin >> numberOne;
                result = squareRoot(numberOne);
                cout << "RESULT -> " << result << "\n";
                break;
            case 7:
                cout << "Input the base number: ";
                cin >> numberOne;
                cout << "Input the exponent: ";
                cin >> numberTwo;
                result = exponent(numberOne, numberTwo);
                cout << "RESULT -> " << result << "\n";
                break;
            case 8:
                cout << "\nExiting Program";
                break;
            default:
                cout << "Invalid Command\n";
                break;
        }
    }
    return 0;
}