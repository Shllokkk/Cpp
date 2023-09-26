//this program shows the use of hierarchical inheritance
#include <iostream>
#include <conio.h>

using namespace std;

class number
{
protected:
    int x;

public:

    void getdata(int a)
    {
        x=a;
    }

    void display()
    {
        cout<<"The number entered is: "<<x<<"\n";
    }
};

class square: public number
{
private:
    int y;

public:

    void sq()
    {
        y=x*x;
    }

    void displaysq()
    {
        cout<<"The square of the number is: "<<y<<"\n";
    }
};

class cube: public number
{
private:
    int z;

public:

    void cu()
    {
        z=x*x*x;
    }

    void displaycu()
    {
        cout<<"The cube of the number is: "<<z<<"\n";
    }

};

int main()
{

    square s1;

    s1.getdata(10);
    s1.display();
    s1.sq();
    s1.displaysq();

    cube c1;
    c1.getdata(10);
    c1.cu();
    c1.displaycu();

    getch();
}
