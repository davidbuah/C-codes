#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double x;
    double y;
    int a,b,c;

    cout<< "Enter the value of a"<<endl;
    cin>>a;

    cout<< "Enter the value of b\n";
    cin >> b;

    cout << "Enter the value of c\n";
    cin >>c;

    x= (-b+ (sqrt(pow(b,2) -4*a*c)))/2*a;
    y= (-b - (sqrt(pow(b,2) -4*a*c)))/2*a;

    cout<< "The values of x are " << x <<" and " << y; 
    
    return 0;
}