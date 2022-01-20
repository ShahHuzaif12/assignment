/*1. Write a program that will find the smallest, largest, and average values in a collection of 
N numbers. Get the value of N before scanning each value in the collection of N numbers.2. Modify your program to compute and display both the range of values
in the data collection and the standard deviation of the data collection. To compute the standard deviation, accumulate the sum of the squares of the data values ( sum_squares ) in the main loop.*/
#include <iostream>
#include <math.h>
using namespace std;
int square(int [], int n);
int main()
{
    int i,n,j,sum = 0,min,max,range,l,k;
   double average,standard_dev;
    
    cout <<"ENter the collection size"<<endl;
    cin >> n;
    cout <<"ENter the values of the collection"<<endl;
    int a[n];
    for(i = 0; i<n; i++)
    {
    cin >> a[i];
    sum = sum + a[i];
    }
    average = sum / n;
    k = average * average;
    max = min = a[0];
    for(i = 0; i<n; i++)
    {
        if (a[i]< min)
        {
            min = a[i];
        }
        else if (a[i]>max)
        {
            max = a[i];
        }
    }
    range = max - min;
    l = square (a,n) * square(a,n);
    standard_dev = sqrt ((l / n) - k);
    cout << "smallest value is  "<<min<<"  and largest value is "<<max<<endl;
    cout <<"Range is "<<range<<" \nAverage is "<<average<<endl;
    cout <<"standard deviation is "<<standard_dev<<endl;

}
int square(int a[], int n)
{
    int k, square = 0;
    for (k = 0; k<n; k++)
    {
        square = square + (a[k]*a[k]);
    }
    return square;
}