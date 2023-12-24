#include <iostream>
using namespace std;
void add(int *n);

int main(){
    int num=2;
    cout<<num<<endl;
    add(&num);
    cout<<num<<endl;

}
void add(int *n){
    *n=*n+10;
    cout<<*n<<endl;
}