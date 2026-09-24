// 49152028
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double mass;
    double density;
    double volume;

    cout << "Enter the mass in grams\n";
    cin >> mass;

    cout << "Enter the density\n";
    cin >> density;

    volume = mass / density;

    cout << fixed << setprecision(2) << endl;
    cout << "The volume of the object is " << volume << endl;
    return 0;
}