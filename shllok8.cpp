//this program shows the different ways to pass arguments to a function

#include <iostream>
#include <conio.h>

using namespace std;

void passbyvalue(int c,int d)  //pass by value or call by value syntax
{                              //the scope of these variables is only limited to the function hence, the swapped variables don't reflect in the main
    int x;

    x=c;
    c=d;
    d=x;
}

void passbyreference(int &c,int &d)  //pass by reference or call by reference syntax
{                                    //the scope of these reference variables reflect the swapped values in the main
    int x;

    x=c;
    c=d;
    d=x;
}

void passbypointer(int *c,int *d)  //pass by pointer or address syntax
{                                  //the scope of these pointer variables reflect the swapped values in the main
    int x;

    x=*c;
    *c=*d;
    *d=x;
}

int main()
{
    int a=23,b=14;

    cout<<"Before swapping: ";
    cout<<"\na="<<a;
    cout<<"\nb="<<b;

    passbypointer(&a,&b);

    cout<<"\n\nAfter swapping: ";
    cout<<"\na="<<a;
    cout<<"\nb="<<b;

    getch();

}
