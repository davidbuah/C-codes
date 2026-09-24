#include <iostream>
#include <cmath>

using namespace std;
double L, i, m, r, t, k;

// first func;
double periodicPayment(double L, double i, double m, double r, double t){
    i = (r/m);
    double R  = L*i/(1-(pow((1+i), (-m*t))));
    return R;
}


//second func

double unpaidLoan(double k, double L, double i, double m, double t, double r){
    i = r/m;
    double unpaidLoan = periodicPayment(L, i, m, r, t)*
    ((1- pow((1+i), (-(m*t-k)))))/i;
    return unpaidLoan;
}

int main(){
    cout << "Enter your loan amount: ";
    cin >> L;

    cout << "Enter the interest rate per year: ";
    cin >> r;
    r= r/100.0;

    cout << "Enter number of payments made per year: ";
    cin >> m;
     
    cout << "How long has the loan lasted in years? ";
    cin >> t;

    cout << "Enter number of payments made so far: ";
    cin >> k;


     double resultPeriod = periodicPayment(L, i, m, r, t );
     double resultUnpaid = unpaidLoan(k, L, i, m, t, r);

     cout << "You periodic payment is: " << resultPeriod  << endl;
     cout << "Your Unpaid balance is :" << resultUnpaid << endl;
}