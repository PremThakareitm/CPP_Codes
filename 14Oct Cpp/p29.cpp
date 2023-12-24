#include <iostream>
using namespace std;

int main() 
{

int i, n;
float arr[10];

cout << "Enter total number of elements upto 10: "<<endl;
cin >> n;
cout << endl;

for(i = 0; i < n; i++) 
{
    cout << "Enter Number " << i + 1 << " : "<<endl;
    cin >> arr[i];
}

for(i = 0;i < n; i++) 
{

// if(arr[0] < arr[i])
if(arr[0] > arr[i])

    arr[0] = arr[i];
}

// cout << endl << "Largest element = " << arr[0]<<endl;
cout << endl << "smallest element = " << arr[0]<<endl;

return 0;
}