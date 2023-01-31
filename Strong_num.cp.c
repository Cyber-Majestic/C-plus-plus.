#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,r,sum=0,i,Fsum=1;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        Fsum=1;
        r=n%10;
        for(i=1; i<=r; i++)
        {
            Fsum=Fsum*i;
        }
        sum=Fsum+sum;
        n=n/10;
    }
    //cout<<sum<<endl;
    if(sum==temp)
        cout<<"Strong number.";
    else
        cout<<"Not strong number.";
}
