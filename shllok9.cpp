//this program shows the use of static members in a class

#include <iostream>
#include <conio.h>

using namespace std;

class apple
{
private:
    int a;  //normal variable cannot be initialized to zero
    static int b;

public:
    void display()
    {
        //a=5;
        //b=10;
        cout<<a<<endl;
        cout<<b<<endl<<endl;
    }
};


int apple::b=0;  //syntax to initialize a static data member

int main()
{
    apple s,p,d;

    s.display();
    p.display();
    d.display();

    getch();
}
