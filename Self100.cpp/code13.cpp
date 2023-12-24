//Develop a C++ program that simulates a basic game of Rock, Paper, Scissors between a user and the computer.
//Use random numbers and loops for gameplay.
#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    int userc,computerc;
    cout<<"Enter the choice:\n1.Rock\n2.Paper\n3.Scissors"<<endl;
    cin>>userc;
    srand((unsigned int) time(NULL) );
    computerc=(rand()%3)+1;
    // cout<<computerc;


    switch(userc)
    {
        case 1:
            cout<<"Rock";
            break;
        case 2:
            cout<<"Paper";
            break;
        case 3:
            cout<<"Scissor";
            break;
        default:
            cout<<"Invalid Input";
    }

    switch(computerc)
    {
        case 1:
            cout<<"Rock";
            break;
        case 2:
            cout<<"Paper";
            break;
        case 3:
            cout<<"Scissor";
            break;
    }

    if (computerc==userc){
        cout<<"\ntie";
    }
    else if (computerc==1 && userc==3 ||
        computerc==2 && userc==1 ||
        computerc==3 && userc==2){
        cout<<"loser";
        }
    else {
        cout<<"\nWinner";
    }
    return 0;
}