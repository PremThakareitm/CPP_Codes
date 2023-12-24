#include <iostream>
using namespace std;

// function definition to swap values

int main() {

    int n;
    
    cout<<"Enter no. of lines. : \n";
    cin>>n;
    
    for (int i = 0 ; i <= n ; i++){
        if (i == 0 ){
         cout<<"* \n";
        }
        for (int j = 0 ; j <= i ; j++){
            if (j==0){cout<<"* ";}
            cout<<" ";
            }
        
        cout<<"* ";
        cout<<"\n";
        if (i == n){

            for (int k = 0 ; k <= n ;k++ )
            {
                if (k == 0){
                    cout<<"*";
                }
                else if (k==n)
                { cout<<"*";}
                else{cout<<" *";}
            
            }
        }
    }
    

    return 0;
}