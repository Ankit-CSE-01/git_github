#include<iostream>
#include <climits>
using namespace std;


int main(){
    int arr[]= {7, 2, 3, 4, 5}; // Initializing an array with values
    int n = sizeof(arr)/sizeof(arr[0]); // it gives the number of elements in the array
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i = 0; i<n; i++){
        mx = max(mx, arr[i]); // Using max function to find the maximum element
        mn = min(mn, arr[i]); // Using min function to find the minimum element
    }
    cout<<mx<<endl; // Printing the maximum element of the array
    cout<<mn<<endl; // Printing the minimum element of the array
}