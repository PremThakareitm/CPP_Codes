#include<iostream>
using namespace std;
int main()
{
    string sen;
    int n,start=0;
    char temp;
    cout<<"Enter sentence:"<<endl;
    getline(cin,sen);
    n=sen.length()-1;
    while(start<n)
    {
        temp=sen[start];
        sen[start]=sen[n];
        sen[n]=temp;
        start++;
        n--;
    }
    cout<<"Reversed form is: "<<sen<<endl;
    return 0;
}