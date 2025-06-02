#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0,product =1; // Initializing an array with values
    int n= sizeof(arr)/sizeof(arr[0]); // it gives the number of elements in the array
    for (int i = 0; i<=n-1; i++){
        sum+=arr[i];
        product*=arr[i]; // Multiplying the values of the array
    }
    cout << sum << endl; // Printing the values of the array
    cout << sum/n << endl;
    cout << product << endl; // Printing the values of the array
}

