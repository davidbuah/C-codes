#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op;
    
    cout << "Enter the exp: ";
    // You can take in multiple input rather using the getline function.
    cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << result;
            break;
        case '-':
            result = num1 - num2;
            cout << result;
            break;
        case '*':
            result = num1 * num2;
            cout << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << result;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        case '%':
        //Since we need an integer in order to solve for the modulo, we cast the floating point into an integer.
            result = (int)num1 % (int)num2;
            cout << result;
            break;
        default:
            cout << "Invalid operator!";
    }

    return 0;
}