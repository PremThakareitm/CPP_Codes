#include <iostream>
using namespace std;

int add(int a,int b)
{
	int sum=a+b;
    return sum;

}

int main()
{
	int a,b,result;
    cout<<"Enter number 1:"<<endl;
    cin>>a;
    cout<<"Enter number 2:"<<endl;
    cin>>b;
    result=add(a,b);
    cout<<a<<"+"<<b<<"="<<result<<endl;

	return 0;
}