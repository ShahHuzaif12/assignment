
/*Write a program to process a collection of daily high temperatures. Your program should 
count and print the number of hot days (high temperature 85 or higher), the number of 
pleasant days (high temperature 60–84),and the number of cold days (high temperatures 
less than 60). It shouldalso display the category of each temperature. Test your program 
on the following data:
55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
92 90 93 87 80 78 79 72 68 61 59*/
//Modify your program to display the average temperature (a real number) at the end of the run.
#include <iostream>
using namespace std;
int main()
{
    int cold = 0, pleas_ent = 0, hot = 0, i, n,j,sum = 0,average;
    cout << "ENter the temperature collection size"<<endl;
    cin >> n;
    int a[n];
    cout <<"Enter the values of the temperature"<<endl;
    for (i =0; i<n; i++)
    {
      cin >> a[i];
      sum = sum + a[i];
    }
    average = sum / n;     // as its mentioned average should be real not float point

    for (i = 0; i<n; i++)
    {
       if (a[i]< 60)
       {
        cout << a[i]<<" is cold"<<endl; //displaying the category of tempreature < 60//
         cold++;
       }
       else if (a[i]>=60 && a[i]<=84)
       {
        cout << a[i]<<" is pleasent"<<endl; 
         pleas_ent++;
       }
       else if (a[i]>=85)
       {
        cout << a[i]<<" is hot"<<endl;
         hot++;
       }
    }


    cout <<"no of pleasent days "<< pleas_ent<<endl;
    cout <<"no of hot days "<< hot<<endl;
    cout <<"no of cold days "<<cold<<endl;
    cout <<"average temperature is "<<average <<endl;
}