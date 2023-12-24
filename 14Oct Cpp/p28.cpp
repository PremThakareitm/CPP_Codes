#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    string str;
    cout<<"enter sentence:"<<endl;
    getline(cin,str);

    n=str.length();

    for(int i=0;i<n;i++)
    {

        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
            cout<<str[i]<<endl;
        }
    }
    
    cout<<c;
    
}