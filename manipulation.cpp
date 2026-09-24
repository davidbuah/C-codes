#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Dealing with fixed and precision

    double x = 3.1415926535;
    double y = 123456.789;


    cout << fixed << setprecision(2);
    cout << x << endl;   // 3.14
    cout << y << endl;   // 123456.79



    //Dealing with set weight
    cout << setw(10) << 42 << endl;        // "        42"
    cout << setw(10) << "Hi" << endl;      // "        Hi"
    cout << setw(5) << 3.14 << setw(10) << "test" << endl;
    return 0;
}