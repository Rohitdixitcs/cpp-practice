#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Calculator logic
    if (op == '+') {
        cout << "a + b = " << (a + b) << endl;
    }
    else if (op == '-') {
        cout << "a - b = " << (a - b) << endl;
    }
    else if (op == '*') {
        cout << "a * b = " << (a * b) << endl;
    }
    else if (op == '/') {
        if (b != 0)
            cout << "a / b = " << (a / b) << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}