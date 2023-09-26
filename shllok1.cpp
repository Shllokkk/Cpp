//this program shows the method to use functions

#include <iostream>
#include <conio.h>

using namespace std;

int area(int, int); //function prototype

int main()
{
    int l,b,a;

    cout<<"Enter the values of length and breadth: ";
    cin>>l>>b;

    a=area(l,b);  //function call

    cout<<"\nThe area of rectangle is: "<<a<<" sq. units";

    getch();
}

int area(int x, int y) //function definition
{
    int c;

    c=x*y;
    return c;
}
