#include<iostream>
using namespace std;

    
    void area(float a)
    {
        cout<<"Enter side of square:"<<endl;
        cin>>a;
        cout<<"Area of square is:"<<a*a<<endl;
    }
    void area(float a, float b)
    {
        cout<<"Enter length rectangle:"<<endl;
        cin>>a;
        cout<<"Enter breadth rectangle:"<<endl;
        cin>>b;
        cout<<"Area of rectangle is:"<<a*b<<endl;
    }

    

    int main()
    {
        float x,y;
        int choice;
        cout<<"\nFunction Overloading\n\n1)Square\n2)Rectangle\n"<<endl;
        cho:
        cout<<"Enter choice:"<<endl;
        cin>>choice;
        if(choice==1)
        {
            area(x);
        }
        else if(choice==2)
        {
            area(x,y);
        }
        else
        {
            cout<<"Enter a valid option."<<endl;
            goto cho;

        }
        return 0;
    }


