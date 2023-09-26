//this program shows use of binary operator overloading

#include <iostream>
#include <conio.h>

using namespace std;

class complex
{

private:

    float a;  // real part
    float b;  // imaginary part

public:

    complex()
    {
        a=0;
        b=0;
    }

    complex(float,float);

    complex operator+(complex);

    void display();

};

complex::complex(float real, float img)
{
    a=real;
    b=img;
}

complex complex::operator+(complex c)
{
    complex sum;

       sum.a= a + c.a;
       sum.b= b + c.b;

       return sum;
}

void complex::display()
{
    cout<<a<<"+"<<b<<"i\n\n";
}

int main()
{
    complex c1(2,3);
    complex c2 (5,7);
    complex c3;

    c3= c1+ c2;

    cout<< "C1=";
    c1.display();

    cout<< "C2=";
    c2.display();

    cout<< "C3=";
    c3.display();

    getch();
}





