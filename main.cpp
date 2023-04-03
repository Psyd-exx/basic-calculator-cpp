# include <iostream>


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

int main()
{
    int numberOne {};
    int numberTwo {};
    bool calcLoop {true};
    int userChoice {0};
    int result {0};


    cout << "Welcome to Sinan's cool C++ Calculator\n";
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";

    while (userChoice != 5) {
        cout << "\n\n(1) Add two numbers\n";
        cout << "(2) Subtract two numbers\n";
        cout << "(3) Multiply two numbers\n";
        cout << "(4) Divide two numbers\n";
        cout << "(5) Exit\n";
        cout << "\nPlease input here: ";
        cin >> userChoice;

        if (userChoice < 1 or userChoice > 5) {
            cout << "Invalid Command\n";
        } else if (userChoice == 5) {
            cout << "\nExiting Program";
        } else {
            cout << "\nInput the first number: ";
            cin >> numberOne;
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

            cout << "\nThe result is: " << result;
        }

    }

    return 0;
}