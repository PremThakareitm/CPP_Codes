#include<iostream>
using namespace std;
int main()
{
    string name;
    int num;
    cout<<"Enter name"<<endl;
    getline(cin,name);
    cout<<"how many time do you want to print the name?"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
    cout<<i<<") "<<name<<endl;
    }
  
    return 0;
}