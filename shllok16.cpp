#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class person
{
    char x[50];

public:

    person()
    {
        strcpy(x,"Bob");
    }

    virtual void display()
    {
        cout<<"The name of the person is "<<x<<endl;
    }
};

class student: public person
{
    char y[50];

public:

    student()
    {
        strcpy(y,"Tom");
    }

    void display()
    {
        cout<<"\nThe name of student is "<<y<<endl;
    }
};

int main()
{
    person p,*x;
    x=&p;

    p.display();
    x->display();
    (*x).display();

    student s;

    x=&s;

    s.display();
    x->display();
    (*x).display();

    getch();

}








