#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //uses of sizeof() operator:
    int a;
    int b;
    float f;
    double lf;
    char ch;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(lf)<<endl;
    cout<<sizeof(ch)<<endl;

    //uses of comma operator:
    int sum=(a=20,b=30,sum=a+b);
    cout<<"Sum of a and b= "<<sum;
}
