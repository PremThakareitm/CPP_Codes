//display charater of string no. of character //calender

#include <iostream>
using namespace std;

int main(){

    string input ; 
    int count = 0;
    char c;

    cout<<"Enter a string";
    cin>>input;



    for(int i = 0 ; i < input.length() ; i++)
    {
        c = toupper(input[i]);
        count = 0;


        for(int j = 0 ; j < i ; j++)
        {
        
            if(c == toupper(input[j]))
            {
                goto end;
            }
        
        }

        for(int j = i ; j < input.length() ; j++)
        {
        
            if(c == toupper(input[j]))
            {
                count ++;
            }
        
        }

        cout<<c<<" = "<<count<<"\n";

        end:
        
    }


    return 0;
}