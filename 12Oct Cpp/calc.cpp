
#include <iostream>
using namespace std;

class calu{
    private:
    
    int choice;
    double a,b,c,d,e,f;

    public:
    double display(){
        cout<<"Enter the number:"<<endl;
        cin>>a>>b;
        cout<<"enter your choice:\n1)+\n2)-\n3)/\n4)*\n"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                c=a+b;
                cout<<"Addition:"<<c<<endl;
                break;
            case 2:
                d=a-b;
                cout<<"Sub:"<<d<<endl;
                break;
            case 3:
                e=a*b;
                break;
                cout<<"Multi:"<<e<<endl;
            case 4:
                f=a/b;
                cout<<"Divi:"<<f<<endl;
                break;
            default:
                cout<<"Error."<<endl;
        }
    return 0.0;
    }

};

int main(){
    calu num;
    num.display();
    return 0;
}

