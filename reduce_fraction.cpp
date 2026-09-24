#include <iostream>
using namespace std;

int check(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int reduce(int& num, int& denominator) {
    if (num <= 0 || denominator <= 0) {
        return 0; 
    }

    int g = check(num, denominator);
    num /= g;
    denominator /= g;
    return 1; 
}

int main() {
    int num, denominator;

    num = 25;
    denominator = 15;
    if (reduce(num, denominator))
        cout << num << '/' << denominator << endl;
    else
        cout << "Error in the fraction division" << endl;

    num = 63;
    denominator = 210;
    if (reduce(num, denominator))
        cout << num << '/' << denominator << endl;
    else
        cout << "Error in the fraction division" << endl;

    num = 25;
    denominator = 0;
    if (reduce(num, denominator))
        cout << num << '/' << denominator << endl;
    else
        cout << "Error in the fraction division" << endl;
    return 0;
}