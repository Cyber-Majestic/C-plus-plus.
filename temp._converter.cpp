#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float C,F;
    cout<<"Enter the temperature in Celsius: ";
    cin>>C;
    cout<<"The temperature in Fahrenheit is: "<<((1.8*C)+32.0)<<endl;
    cout<<"Enter the temperature in Celsius: ";
    cin>>F;
    cout<<"The temperature in Celsius is: "<<((F-32)/1.8)<<endl;
    getch();
}

