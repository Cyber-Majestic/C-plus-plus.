#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0; i<10; i++)
    {
        if(i==5)
            break;
        cout<<i<<endl;
    }

    cout<<"\n";

    for(j=0; j<20; j++)
    {
        if(j>5)
            continue;
        cout<<j<<endl;
    }
    getch();
}
