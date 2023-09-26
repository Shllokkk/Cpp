#include <iostream>  //this program shows the use of classes
#include <conio.h>

using namespace std;

class circle
{
private:
    int r,cir,ar;

public:
    void getdata()
    {
        cout<<"Enter the radius: ";
        cin>>r;
        cout<<"The radius entered is: "<<r<<endl;
        getch();
    }

    void circumference()
    {
        cir= 2*3.14*r;
    }

    void area()
    {
        ar=3.14*r*r;
    }

    void display();

};

void circle::display()
    {
        cout<<"\nThe circumference of the circle is: "<<cir;
        getch();
        cout<<"\nThe area of the circle is: "<<ar<<"\n\n";
    }


int main()
{
    circle C,T;
    C.getdata();
    C.circumference();
    C.area();
    C.display();

    getch();

    T.getdata();
    T.circumference();
    T.area();
    T.display();

    getch();
}
