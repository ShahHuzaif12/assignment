/*Write a program to process a collection of daily high temperatures. Your program should 
count and print the number of hot days (high temperature 85 or higher), the number of 
pleasant days (high temperature 60–84),and the number of cold days (high temperatures 
less than 60). It shouldalso display the category of each temperature. Test your program 
on the following data:
55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
92 90 93 87 80 78 79 72 68 61 59*/
#include <iostream>
using namespace std;
int main()
{
    int temp_ture;
    cout << "Enter the tempreature"<< endl;
    cin >> temp_ture;
    if (temp_ture < 60)
    {
      cout <<"its really cold!"<<endl;
    }
    else if (temp_ture == 60 || temp_ture <= 84)
    {
      cout <<"its pleasent!"<<endl;
    }
    else if (temp_ture >= 85)
    {
      cout <<"its really hot!"<<endl;
    }
}