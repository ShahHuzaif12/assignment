/*Raising a number n to a power p is the same as multiplying n by itself p times. Write a function
  called power() that takes a double value for n and an int value for p, and returns the result as a double
  value. Use a default argument of 2 for p, so that if this argument is omitted, the number n will be
  squared. Write a main() function that gets values from the user to test this function.*/



#include<iostream>
#include<conio.h>
using namespace std;
double power(double n, int p=2);

int main(void)
{
 
 double n; int p=2;
 cout<<"Enter n: "; cin>> n;
 cout<<"Enter p: "; cin>> p;
 cout <<"The power is "<<power(n, p);
}

double power(double n, int p)
{ for(int ret=1; p>0; p--) 
ret*=n; 
return ret;}