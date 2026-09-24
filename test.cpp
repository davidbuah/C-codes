#include <iostream>
#include <string>
using namespace std;


int main(){
    string firstname;
    string lastname;
    int age;

    cout << "Please enter your firstname"<<endl; 
    cin >> firstname;

    cout << "Enter your lastname" << endl;
    cin >> lastname;

    cout << "Enter your age\n";
    cin >> age;
    
    cout << "Hello "<< firstname <<" " << lastname <<"You are "<<age<<" years old" <<". You are welcome.";

    return 0;
}