#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a value:";
    cin>>a;
    if(a>0)
        cout<<"The number is positive.";
    else if(a<0)
        cout<<"The number is negative.";
    else
        cout<<"The number is 0";
    getch();
}
