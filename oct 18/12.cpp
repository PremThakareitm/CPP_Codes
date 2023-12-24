#include<iostream>
#include <cstdlib>
using namespace std;

void clearTerminal() {
    system("clear");
}

int main()
{
    int num,s,count=0;
    cout<<"Set a secret number."<<endl;
    cin>>s;
    clearTerminal();
    while(num!=s && count<3)
    {
        cout<<"Guess the number. You have three chances!"<<endl;
        cin>>num;
        count++;
        if(num==s)
        {
            cout<<"Yayy, Thats right!."<<endl;
            cout<<"You win!"<<endl;
            return 0;
        }
        else if(num!=s && count<3)
        {
            cout<<"OOPS! Try again:("<<endl;       
        }

        if(count==3)
        {
            clearTerminal();
            cout << "Game over :(\n";
        }
    }
    return 0;
}