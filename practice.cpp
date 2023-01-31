#include<iostream>
#include<conio.h>
using namespace std;
int test(int N)
{
    int i,A[20],Num;

    for(i=0; i<N; i++)
        cin>>A[i];
    cin>>Num;
       for(i=0; i<N; i++)
    {
        if(A[i]==Num)
            return i+1;
    }
    i=-1;
    return i;
}
int main()
{
    int n,pos;
    cin>>n;
    pos=test(n);
    if(pos>=0)
        cout<<"The number is in "<<pos<<"-th position.";
    else
        cout<<"The number is not here.";

}
