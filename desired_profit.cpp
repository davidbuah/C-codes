// 49152028

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double merchandise, salary, rent, electricity_cost;

    cout << "Enter the total cost of the merchandise\n";
    cin >> merchandise;

    cout << "Enter the total salary of the employees including you own salary\n";
    cin >> salary;

    cout << "Enter the cost of yearly rent\n";
    cin >> rent;

    cout << "Enter the cost of electricity\n";
    cin >> electricity_cost;

    double total_expense = salary + electricity_cost + rent;

    double desiredRevenue = merchandise + total_expense + 0.10 * merchandise;

    double markup = (desiredRevenue / 0.85 - merchandise) / merchandise;

    cout << fixed << setprecision(2);

    cout << "Total expenses: $" << total_expense << endl;
    cout << "Desired revenue (after 15 perc sale): " << desiredRevenue << endl;
    cout << "Required markup: " << markup * 100 << "%" << endl;

    return 0;
}