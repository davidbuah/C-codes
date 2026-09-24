// 49152028
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius,height;
    double pi=3.142;

    cout << "Enter the radius of the base\n";
    cin >> radius;

    cout << "Enter the height of the cylinder\n";
    cin>> height;

    double volume = pi* pow(radius,2)*height;
    double length_of_cube= cbrt(volume);

    cout<< volume<<endl;

    cout << "The side of the cube is " << length_of_cube;
    return 0;
}