#include <iostream>
#include <conio.h>

using namespace std;

class big
{
private:
    int a;

public:

    big()
    {
        cout<<"this is default constructor.\n\n";
    }

    big(int x)
    {
        a=x;
        cout<<"this is parameterized constructor.\n";
        cout<<"the value of a is "<<a;
    }
};

int main()
{
    big b1;
    b1=big(5);

    getch();
}
