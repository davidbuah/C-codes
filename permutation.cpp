#include <iostream>
using namespace std;
//Defining a function for permutation

int result=1;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        result=n*factorial(n-1);
        return result;
    }
    
}
int permutation(int n,int r){
    return factorial(n)/factorial(n-r);
}

//Doing for combination
int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    cout <<"We are doing permutation\n";
    int n,r;
    cout<< "Make sure the number you will enter for n is greater than r\n";
    cout << "Enter the value of n"<<endl;
    cin >> n;

    cout<< "Enter the value of r"<<endl;
    cin >> r;

    /*if(n<r){
        cout<<"You were told n should be more than r"<<endl;
    }*/

    cout<<"The permutation of "<<n<<"P"<<r<<" is "<< permutation(n,r)<<endl;

    cout<<"The combination of "<<n<<"C"<<r<<" is "<< combination(n,r)<<endl;
    return 0;
}