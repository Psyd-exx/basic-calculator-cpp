# include <iostream>
# include <cmath>

using namespace std;

int addition(int numberOne, int numberTwo)
{
    return numberOne + numberTwo;
}

int subtraction(int numberOne, int numberTwo)
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


int main()
{
    int numberOne {};
    int numberTwo {};
    int userChoice {0};
    int result {0};

    cout << "\nWelcome to Sinan's cool C++ Calculator!\n";
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";

    while (userChoice != 7) {
        cout << "\n(1) Add two numbers\n";
        cout << "(2) Subtract two numbers\n";
        cout << "(3) Multiply two numbers\n";
        cout << "(4) Divide two numbers\n";
        cout << "(5) Square a number\n";
        cout << "(6) Square root of a number\n";
        cout << "(7) Exit\n";
        cout << "\nPlease input here: ";
        cin >> userChoice;

        if (userChoice < 1 or userChoice > 7) {
            cout << "Invalid Command\n";
        } else if (userChoice == 7) {
            cout << "\nExiting Program";
        } else {
            cout << "\nInput the first number: ";
            cin >> numberOne;

            if (userChoice == 5) {
                result = square(numberOne);
            } else if (userChoice == 6) {
                result = squareRoot(numberOne);
            }


            if (userChoice != 5 && userChoice != 6) {
                cout << "\nInput the second number: ";
                cin >> numberTwo;

                if (userChoice == 1) {
                    result = addition(numberOne, numberTwo);
                } else if (userChoice == 2) {
                    result = subtraction(numberOne, numberTwo);
                } else if (userChoice == 3) {
                    result = multiply(numberOne, numberTwo);
                } else if (userChoice == 4) {
                    result = divide(numberOne, numberTwo);
                }
            }
            cout << "\nThe result is: " << result;
        }

    }

    return 0;
}