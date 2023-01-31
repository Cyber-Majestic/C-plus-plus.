
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int sum=0,n,r,len,temp;
    cin>>n;
    temp=n;
    len=log10(n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,len+1);
        n=n/10;
    }
    //cout<<sum<<endl;
    if(sum==temp)
        cout<<"The number is armstrong.";
    else
        cout<<"The number is not armstrong.";
}
