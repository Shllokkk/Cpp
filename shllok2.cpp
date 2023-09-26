#include <iostream>  //program using function overloading
#include <conio.h>

using namespace std;

int area(int, int);
int area(int);

int main()
{
    int l,b,a,r,ar;

    cout<<"Enter the values of length and breadth: ";
    cin>>l>>b;

    a=area(l,b);

    cout<<"\nThe area of rectangle is "<<a<<".";
    getch();

    cout<<"\n\nEnter radius: ";
    cin>>r;

    ar=area(r);

    cout<<"\nThe area of circle is "<<ar<<".";
    getch();
}

int area(int l, int b)
{
    int a;

    a=l*b;
    return a;
}

int area(int r)
{
    int ar;

    ar=3.14*r*r;
    return ar;
}
