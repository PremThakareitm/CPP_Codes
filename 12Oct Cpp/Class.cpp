#include <iostream>
using namespace std;

class Emplo{
    private:
    double salary,ts,tax;
    string name;
    public:
    void setdata(){
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Salary:";
        cin>>salary;
        tax=salary*0.18;
        ts=salary+tax;
    }
    void getdata(){
        cout<<name<<"\n";
        cout<<ts<<"\n";
    }
};
int main(){
    int n;
    cout<<"Enter the Number of Empl:";
    cin>>n;
    Emplo empy[n];
    for (int i=1;i<=n;i++){
        empy[i].setdata();
    }
    for(int i;i<=n;i++){
        empy[i].getdata();
    }
    return 0;
}






// #include <iostream>
// using namespace std;

// class Student {
//     private:
//     int roll;
//     string name;
//     public:
//     void setdata(){
//         cout<<"Enter the Roll_no:";
//         cin>>roll;
//         cout<<"Enter the Name:";
//         cin>>name;
//     }
//     void getdata(){
//         cout<<roll<<"\n";
//         cout<<name<<"\n";
//     }
// };

// int main(){
//     int n;

//     cout<<"Enter the number of students : ";
//     cin>>n;

//     Student stud[n];

//     for(int i = 0 ; i < n ; i++){
//         stud[i].setdata();
//     }
//     for(int i = 0 ; i < n ; i++){
//         stud[i].getdata();
//     }
//     return 0;
// }