#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter an alphabet"<<endl;
    cin>>ch;
    ch=tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
    cout<<ch<<" is a vowel"<<endl;
    else
    cout<<ch<<" is a consonant"<<endl;
    return 0;
}