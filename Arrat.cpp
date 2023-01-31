#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k,r1,r2,c1,c2,a[20][20],b[20][20],result[20][20],sum=0;
    cout<<"Enter the value of row and column of First matrix:\n";
    cin>>r1>>c1;
    cout<<"Enter the value of row and column of second matrix:\n";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"Try again!!!\n";
        cout<<"Enter the value of row and column of First matrix:\n";
        cin>>r1>>c1;
        cout<<"Enter the value of row and column of second matrix:\n";
        cin>>r2>>c2;
    }
    //scanning matrix a:
    cout<<"Enter the elements of matrix a:\n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }

    //printing matrix a:
    cout<<"a=";
    for(i=0;i<r1;i++)
    {
        cout<<"\t";
        for(j=0;j<c1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }


    //scanning matrix b:
    cout<<"Enter the elements of matrix b:\n";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }

    //printing matrix b:
    cout<<"b=";
    for(i=0;i<r2;i++)
    {
        cout<<"\t";
        for(j=0;j<c2;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

    //multiplication:

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    cout<<"The result is= ";
    for(i=0;i<r1;i++)
    {
        cout<<"\t";
        for(j=0;j<c2;i++)
        {
            cout<<result[i][j];
        }
        cout<<"\t";
    }

}
