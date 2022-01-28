/* a program that takes the x – y coordinates of a point in the Cartesian plane and prints
 a message telling either an axis on which the point lies or the quadrant in which it is found.
Sample lines of output:
(-1.0, -2.5) is in quadrant III
(0.0, 4.8) is on the y-axis*/
#include <iostream>
using namespace std;

int main()
{    double x,y;
     cout<<"Enter the  point x "<<endl;
     cin>>x;
     cout<<"Enter the  point y "<<endl;
     cin>>y;
	if (x > 0 and y > 0)
    {
		cout << "lies in First quadrant";
    }
	else if (x < 0 and y > 0)
	{	
        cout << "lies in Second quadrant";
    }
	else if (x < 0 and y < 0)
	{
         cout << "lies in Third quadrant";
    }
	else if (x > 0 and y < 0)
    {        
        cout << "lies in Fourth quadrant";
    }
	else if (x == 0 and y > 0)
	{	
        cout<< "lies at positive y axis";
    }
	else if (x == 0 and y < 0)
	{	
        cout<< "lies at negative y axis";
    }
	else if (y == 0 and x < 0)
	{
        cout<< "lies at negative x axis";
    }
	else if (y == 0 and x > 0)
	{
        cout << "lies at positive x axis";
    }
	else
	{	
        cout << "lies at origin";
    }
}