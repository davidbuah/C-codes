#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int num_of_students;
    int scores,count_range24=0,count_range49=0,count_range74=0,count_range99=0,count_range124=0,count_range149=0,count_range174=0,count_range200=0;
    double mean, variance, StandardDeviation,sumFreq=0;
    //double sum = 0;
    double sum = 0;
    cout << "Enter the number of students\n";

    cin >> num_of_students;
    for (int i = 1; i <= num_of_students; i++)
    {
        cout << "Enter the scores for each students one after eachother" << endl;
        cin >> scores;
        if(scores>=0 && scores<25){
            count_range24++;
        }
        else if(scores>=25 && scores<50){
            count_range49++;
        }
        else if(scores>=50 && scores<75){
            count_range74++;
        }
        else if(scores>=75 && scores<100){
            count_range99++;
        }
        else if(scores>=100 && scores<125){
            count_range124++;
        }
        else if(scores>=125 && scores<150){
            count_range149++;
        }
        else if(scores>=150 && scores<175){
            count_range174++;
        }
        else if(scores>=175 && scores<=200){
            count_range200++;
        }
        //sum = sum + scores;
    }

    double mid1 = (0 + 24) / 2.0;   
    double mid2 = (25 + 49) / 2.0;  
    double mid3 = (50 + 74) / 2.0;  
    double mid4 = (75 + 99) / 2.0;  
    double mid5 = (100 + 124) / 2.0;
    double mid6 = (125 + 149) / 2.0;
    double mid7 = (150 + 174) / 2.0; 
    double mid8 = (175 + 200) / 2.0;  

    //Using the midpoint to calculate the variance
    sumFreq += count_range24  * pow(mid1   - mean, 2);
    sumFreq += count_range49  * pow(mid2  - mean, 2);
    sumFreq += count_range74  * pow(mid3   - mean, 2);
    sumFreq += count_range99  * pow(mid4   - mean, 2);
    sumFreq += count_range124 * pow(mid5  - mean, 2);
    sumFreq += count_range149 * pow(mid6  - mean, 2);
    sumFreq += count_range174 * pow(mid7  - mean, 2);
    sumFreq += count_range200 * pow(mid8 - mean, 2);


    variance = sumFreq/ num_of_students;
    StandardDeviation = sqrt(variance);



    //Calculating the total of the frequency and midpoint to use to solve the mean
    sum += count_range24  * mid1;
    sum += count_range49  * mid2;
    sum += count_range74  * mid3;
    sum += count_range99  * mid4;
    sum += count_range124 * mid5;
    sum += count_range149 * mid6;
    sum += count_range174 * mid7;
    sum += count_range200 * mid8;

    mean = sum / num_of_students;




    //mean = sum / num_of_students;
    cout << "0-24: " << count_range24 << endl;
    cout << "25-49: " << count_range49 << endl;
    cout << "50-74: " << count_range74 << endl;
    cout << "75-99: " << count_range99 << endl;
    cout << "100-124: " << count_range124 << endl;
    cout << "125-149: " << count_range149 << endl;
    cout << "150-174: " << count_range174 << endl;
    cout << "175-200: " << count_range200 << endl;
    cout << "The total score of the students is "<< sum<<endl;
    cout << "The mean of the scores is " << mean << endl;
    cout<< "The variance of the scores is "<< variance<<endl;
    cout<< "The standard deviation of the scores is "<< StandardDeviation<<endl;

    return 0;
}