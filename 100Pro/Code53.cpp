//Implement a program that checks if a string is a palindrome.

#include <iostream>
#include <string>


using namespace std;


int main()
{
    string str;
    int a = 0,n;

    cout << "Enter a string to check for Palindrome: ";
    cin >> str;
    n=str.length();

    for(int i=0; i<n/2 ;i++)
    {
        if(str[i] == str [n - (i+1) ] )
        {
            a++;
        }
    }

    if(a==n/2){
        cout<<"p";
    }
    else{
        cout<<"np";
        }

    // a=str.length() - 1;
    // for(int i=a ;i>=0;i--){
    //     b=str[i];}
    //     if(b!=str){
    //     cout<<"Is p ";
    // }
    //     else if(b==str){
    //     cout<<"not p";
    // }
    

//     if (str.at == str.at) 
//     {
//         cout << "The string is a palindrome." << endl;
//     } 
//     else 
//     {
//         cout << "The string is not a palindrome." << endl;
//     }

    return 0;
}