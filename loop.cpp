/*Write a program the computes the mean/average score of the C++ examination scores using the While loop Statement.
The scores should be from 0 to 100*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    float scores,average,sum=0;
    int no_students;
    string answer;
    int i=0, count=0;

   /* cout<<"Enter the number of students\n";
    cin>>no_students;

    while(i<no_students){
        cout<<"Enter the marks of each student\n";
        cin>>scores;
        sum+=scores;
        i++;
    }
    average=sum/no_students;
    cout<<"The average scores of the students are "<<average;*/


    while(true){
        cout<<"Would you like to enter for students(y/n)\n";
        cin>>answer;
        if(answer=="y"){
            cout<<"Enter the marks of each student\n";
            cin>>scores;
            sum+=scores;
            count++;
        }
        else{
            break;
        }
        
    }

    average=sum/count;
    cout<<"The average scores of the students are "<<average;
    return 0;
}