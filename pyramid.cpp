/*Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX */
#include <iostream>
using namespace std;
int main()
{
    int i,j,k=0,n;
    char y;
    cout <<"Enter the no of rows"<<endl;
    cin >> n;
    cout <<"enter the type of character"<<endl;
    cin >> y;

    for (i = 0; i<=n; i++)
    {
        for (j = 0; j<i+k-1; j++)
        {
        cout<<" "<<y ;
        }
        k++;
        cout<<"\n";
    }
}