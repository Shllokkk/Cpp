#include <iostream>  //this program shows use of class function members with arguments and return data type
#include <conio.h>

using namespace std;

class rect
{
private:
    int l,b,p,a;

public:

    void getdata(int x,int y)
    {
        l=x;
        b=y;
    }

    int perimeter()
    {
        p=2*(l+b);
        return p;
    }

    void area()
    {
        a=l*b;
    }

    void display()
    {
        cout<<"\nThe area of rectangle is: "<<a<<" sq. units";
    }
};

int main()
{
    int a,b;

    cout<<"Enter the length and breadth of the rectangle: ";
    cin>>a>>b;

    rect R;

    R.getdata(a,b);

    int ret=R.perimeter();
    cout<<"\nThe perimeter of rectangle is: "<<ret<<" units";

    R.area();
    R.display();

    getch();

}
