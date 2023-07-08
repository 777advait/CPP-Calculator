#include <iostream>
#include <typeinfo>
using namespace std;


enum Operation {Add = 1, Sub, Div, Mul};


class Calculator { 
    public:
        Calculator(double n1, double n2) {
            num1 = n1;
            num2 = n2;
        }

        double add() {
            return num1 + num2;
        }

        double sub() {
            return num1 - num2;
        }
        double div() {
            return num1 / num2;
        }
        double mul() {
            return num1 * num2;
        }

    private:
        double num1;
        double num2;
};


int main() {
    cout << "Select Operation:\n[1] Addition\n[2] Subtraction\n[3] Division\n[4] Multiplication\nEnter the corresponding index number: ";

    int operation;
    
    while (true) {
        cin >> operation;

        if (operation < 1 || operation > 4 || typeid(operation) != typeid(int)) {
            cout << "\nInvalid operation index!!\n";
            continue;
        }

        else {
            break;
        }
    }

    int num1, num2;

    cout << "\nEnter the first number to be operated: ";
    cin >> num1;
    cout << "Enter the second number to be operated: ";
    cin >> num2;

    Calculator calc(num1, num2);

    switch (operation)
    {
    case Add:
        cout << "\nYour result is: " << calc.add();
        break;
    
    case Sub:
        cout << "\nYour result is: " << calc.sub();
        break;

    case Div:
        cout << "\nYour result is: " << calc.div();
        break;
    
    case Mul:
        cout << "\nYour result is: " << calc.mul();
        break;

    default:
        return 0;
    }
}