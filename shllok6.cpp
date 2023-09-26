#include <iostream>  //this program shows the meaning and use of access specifiers in class
#include <conio.h>

using namespace std;

class bloodfallen
{
public:

    int a=23;  //variable a is private

public:

    int b=14;  //variable b is public

    bloodfallen()  //constructor
    {
        cout<<"default constructor"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }

    void display()  //member function defined inside the class
    {
        cout<<"\nmember function";
        a=10;  //a member function can alter value of a private as well as public data member
        b=100;
        cout<<"\n"<<a;
        cout<<"\n"<<b;
    }
};

void shalltear(bloodfallen obj)  // a function outside the class can access its data members using the following syntax
{
    cout<<"\n\noutside function";
    obj.a=20;    //a function outside the class cannot alter the value of it's private data member
    obj.b=200;   //it can alter value of a public data member
    cout<<"\n"<<obj.a;
    cout<<"\n"<<obj.b;
}


int main()
{
    bloodfallen obj;  //object declaration
    //the constructor is called by default when an object of the class is created in the main

    obj.display();  //member function call

    shalltear(obj); //function call

    obj.a=30;
    obj.b=300;  //the class object can only access the public data members
    cout<<"\n\nobject call";
    cout<<"\n"<<obj.a;
    cout<<"\n"<<obj.b;

    cout<<"\n\nThis program shows use of access specifiers.";

    getch();
}


















