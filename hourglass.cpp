#include <iostream>
using namespace std;

int main() {
    for (int i = 6; i >= 1; i--) {
        for (int s = 0; s < 6 - i; s++) {
            cout << " ";
        }
        for (int a = 0; a <i; a++) {
            cout << "*";
            if (a < i - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= 6; i++) {
        for (int s = 0; s < 6 - i; s++) {
            cout << " ";
        }
        for (int a = 0; a < i; a++) {
            cout << "*";
            if (a < i - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}