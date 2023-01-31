#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>='A' && ch<='Z')
       ch=tolower(ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<ch<<" is a vowel.";
    }
    else
        cout<<ch<<" is consonant.";
}
