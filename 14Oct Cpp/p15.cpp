#include<iostream>
using namespace std;
int main()
{
    char gen,sea,age;
    cout<<"Enter your gender: M or F"<<endl;
    cin>>gen;
    gen=toupper(gen);
    if(gen=='M' )
    {
        cout<<"Enter season: summer(S), winter(W),rainy(R)"<<endl;
        cin>>sea;
        sea=toupper(sea);
        cout<<"Enter age"<<endl;
        cin>>age;
        if(sea=='S' && age<=18)
        {
            cout<<"tank and shorts"<<endl;
        }
        else if(sea=='S' && age>18)
        {
            cout<<"sleeveless top and shorts"<<endl;

        }
        else if(sea=='W' && age<=18)
        {
            cout<<"sweats"<<endl;
        }
        else if(sea=='W' && age>18)
        {
            cout<<"thermals"<<endl;
        }
        else if(sea=='R' )
        {
            cout<<"raincoat"<<endl;

        }
    }
    else if(gen=='F')
    {
        cout<<"Enter season: summer(S), winter(W),rainy(R)"<<endl;
        cin>>sea;
        sea=toupper(sea);

        cout<<"Enter age"<<endl;
        cin>>age;
        if(sea=='S' && age<=18)
        {
            cout<<"crop and shorts"<<endl;
        }
        else if(sea=='S' && age>18)
        {
            cout<<"sleeveless top and shorts"<<endl;

        }
        else if(sea=='W' && age<=18)
        {
            cout<<"sweatshirt and sweatpants"<<endl;
        }
        else if(sea=='W' && age>18)
        {
            cout<<"thermals"<<endl;
        }
        else if(sea=='R' )
        {
            cout<<"raincoat"<<endl;

        }
    }
    else
    cout<<"Invalid gender just die.,"<<endl;
    return 0;

}