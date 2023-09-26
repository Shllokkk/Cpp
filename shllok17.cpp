#include <iostream>
#include <conio.h>

using namespace std;

class complex
{
    int x,y;

public:

    complex(){};

    complex(int real,int img)
    {
        x=real;
        y=img;
    }

    void display()
    {
        cout<<x<<"+"<<y<<"i";
    }

    complex operator+(complex c)
    {
        complex f;

        f.x=x+c.x;
        f.y=y+c.y;

        return f;
    }

};

int main()
{
    complex c1(2,3),c2(5,6),c3;

    c3=c1+c2;

    cout<<"1st number = ";
    c1.display();

    cout<<"\n\n2nd number = ";
    c2.display();

    cout<<"\n\nTheir sum is = ";
    c3.display();

    getch();
}
