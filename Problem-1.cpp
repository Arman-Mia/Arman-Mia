#include <iostream>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    void calculate() {
        if (operation == "add")
            cout << "Result: " << a + b;
        else if (operation == "subtract")
            cout << "Result: " << a - b;
        else if (operation == "multiply")
            cout << "Result: " << a * b;
        else if (operation == "divide") {
            if (b != 0)
                cout << "Result: " << a / b;
            else
                cout << "Division by zero not allowed";
        }
        else
            cout << "Invalid operation";
    }
};

int main() {
    double a, b;
    string operation;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter operation (add/subtract/multiply/divide): ";
    cin >> operation;

    Calculator calc(a, b, operation);
    calc.calculate();

    return 0;
}
