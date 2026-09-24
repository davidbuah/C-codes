// 49152028

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double netBalance,payment,interestRate;
    int d1,d2;
    cout << "Enter the netBalance\n";
    cin>>netBalance;

    cout << "Enter the payment\n";
    cin>>payment;

    cout << "Enter the interest rate per month\n";
    cin >> interestRate;

    cout << "Enter the number of days in the billing cycle"<<endl;
    cin >> d1;

    cout << "Enter the number of days payment is made before billing cycle"<<endl;
    cin >> d2;

    double averageDailyBalance =(netBalance*d1-payment*d2)/d1;
    double interest = averageDailyBalance * interestRate;

    cout << "The interest of this transaction is "<<fixed << setprecision(2)<< interest;
    return 0;
}

