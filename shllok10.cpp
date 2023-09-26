#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a[100];

    cout<<"Enter 5 numbers: "<<endl;

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(int x=0;x<5;x++)
    {
       cout<<"\n\nThe "<<x+1<<" number entered is: "<<a[x]<<endl;
    }

    getch();
}
