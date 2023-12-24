//Create a program to check if a character is a vowel or consonant.

#include <iostream>
using namespace std;

int main(){
    string str;
    int n,a=0;
    cout<<"Enter the String:";
    cin>>str;
    n=str.length();
    for(int i=0;i<=n;i++){
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u'){
        a++;
        cout<<"\nGiven Vowel of String:"<<str[i]<<endl;
        }

    }
    cout<<"\nNumber of Vowels:"<<a<<endl;
    cout<<"\nNumber of Consonant:"<<n-a<<endl;
} 