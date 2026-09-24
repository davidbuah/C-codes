#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double f;
    double x=1.57;

    f=sqrt((sin(x)-pow(x,5))/(log(x)+x/4));
    
    cout<<f;
    return 0;
}