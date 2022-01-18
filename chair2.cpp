#include<iostream>
using namespace std;
int main()
{
    int i, n ,stand,l=1;
    cout <<"Enter the person playing"<< endl;
    cin >> n;
    cout <<"Enter the no of chairs available"<<endl;
    cin>> i;
    stand = n - i;
    while (n != stand)
    {
        l = n * l;
        n--;
    }
    cout <<"the combination for the persons to be on the chair is "<<l<<endl;
    cout <<"The  no of the persons standing is "<<stand<<endl;
}