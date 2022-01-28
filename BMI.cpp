/* Write a program that calculates the user’s body mass index (BMI) and categorizes it as 
underweight, normal, overweight, or obese, based on the following table from the United States 
Centers for Disease Control: 
 
To calculate BMI based on weight in pounds ( wt_lb ) and height in inches ( ht_in ), use this 
formula (rounded to tenths):
703 * wt_lb /ht_in^2 */
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    double weight,height,bmi=0;
    cout <<"Please Enter the body wight in Pounds and height in INCHES\n";
    cin >>weight>>height;
    bmi = ((703 * weight) / (height * height));
    cout <<setw(3)<<"BMI"<<setw(25)<<"WEIGHT STATUS"<<endl;
        if (bmi < 18.5 )
    {
        cout<<setw(3) <<bmi<<setw(19)<<"Underweight"<<endl;
    }
    else if (bmi >= 18.5 && bmi <=24.9)
    {
        cout<<setw(3)<<bmi<<setw(19)<<"Normal"<<endl;
    }
    else if (bmi >=25.0 && bmi <= 29.9)     //5.0–29.9
    {
        cout<<setw(3)<<bmi<<setw(19)<<"Overweight"<<endl;
    }
    else if (bmi >= 30)
    {
        cout<<setw(3) <<bmi<<setw(25)<<"Obease";
    }
}