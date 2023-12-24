#include <iostream>
using namespace std;

class Product {
    private:
    string name;
    int qty;
    float price,total;
    public:
    void cart(){
        cout<<"Enter the Product Name:";
        cin>>name;
        cout<<"Enter the Quantity:";
        cin>>qty;
        cout<<"Enter the Price:";
        cin>>price;
        total=qty*price;
    }
    void display(){
        cout<<endl;
        cout<<"Name of the Product: "<<name<<endl;
        cout<<"Total Cost"<<"("<<qty<<"*"<<price<<")"<<":"<<"Rs."<<total<<endl;

    }
};

int main(){
    int n;
    cout<<"Enter the Number of Product : "<<endl;
    cin>>n;
    Product pro[n];

    for(int i = 0 ; i < n ; i++){
        pro[i].cart();
    }
    for(int i = 0 ; i < n ; i++){
        pro[i].display();
    }
    return 0;
}