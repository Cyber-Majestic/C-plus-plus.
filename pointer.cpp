#include<iostream>
#include<conio.h>
using namespace std;
//call by value:
int test(int a, int b)
{
     a=10,b=10;

}
int main()
{
    int a=20,b=30;
    test(a,b);
    cout<<a<<" "<<b;
}
