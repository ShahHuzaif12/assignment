/*Write a function called zeroSmaller() that is passed two int arguments by reference and then sets
  the smaller of the two numbers to 0. Write a main() program to exercise this function.*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int n1, n2;
 cout<<"Enter n1: "; 
        cin>> n1;
 cout<<"Enter n2: "; 
 cin>> n2;
 cout <<"The number assigned to zero is ";
 if(zeroSmaller(n1, n2)) cout<<"n1"; 
 else cout<<"n2";
}

bool zeroSmaller(int& n1, int& n2)
{ 
 if(n1<n2) {n1=0; return true;}
 else {n2=0;return false;}
}