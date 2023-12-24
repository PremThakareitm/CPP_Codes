// //1. You are tasked with creating an inventory management system for a
// small store. The system should use object-oriented principles in C++. Your
// program should have the following features:
// Create a Product class that represents a product in the inventory.
// Each Product object should have the following attributes:
// Product ID (an integer)
// Product Name (a string)
// Price (a floating-point number)
// Quantity in stock (an integer)
// Implement a parameterized constructor for the Product class to
// initialize the attributes when a new product is added to the inventory.

#include <iostream>
using namespace std;

class product{
    private:
    int p_id,qty;
    string name;
    float price,total;

    public:
    product(int id,int q,string n,float p,float t){
        p_id=id;
        qty=q;
        name=n;
        price=p;
        total=t;
        t=p*q;
    }
    // void getdetails(){
    //     cout<<"Enter the Product ID:";
    //     cin>>p_id;
    //     cout<<"Enter the Product Name:";
    //     cin>>name;
    //     cout<<"Enter the Price:";
    //     cin>>price;
    //     cout<<"Enter the Quantity:";
    //     cin>>qty;
    // }
    void display(){
        cout<<"Product ID:"<<p_id<<endl<<"Product Name:"<<name<<endl<<"Product Price:"<<price<<endl<<"Quantity:"<<qty<<endl<<"Total Price:"<<total<<endl;
    }

};

int main(){

    int p_id,qty;
    string name;
    float price,total;

    cout<<"Enter the Product ID:";
    cin>>p_id;
    cout<<"Enter the Product Name:";
    cin>>name;
    cout<<"Enter the Price:";
    cin>>price;
    cout<<"Enter the Quantity:";
    cin>>qty;

    product pro(p_id,qty,name,price,total);
    pro.display();

    return 0;
}