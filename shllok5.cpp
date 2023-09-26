#include <iostream>   //this program shows the use of constructor and destructor
#include <conio.h>

using namespace std;

class mana
{
public:

    mana(); //constructor name has to be same as class name and does not need data type
    void display(); //member function
    ~mana(); //destructor syntax
};

mana::mana()
{
    cout<<"The object is born.";
}

void mana::display()
{
    cout<<"\n\nThe object is alive.";
}

mana::~mana()
{
    cout<<"\n\nThe object is destroyed.";
}

int main()
{
    mana r;  //when an object or instance of a class is created the constructor is called automatically without the need of actually calling it.

    r.display(); //member function call

    //the destructor is also called automatically when the object reaches the end of its scope
    getch();
}
