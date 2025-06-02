#include<iostream>
#include <climits>
using namespace std;


int main(){
    int arr[]= {7, 2, 3, 4, 5}; // Initializing an array with values
    int n = sizeof(arr)/sizeof(arr[0]); // it gives the number of elements in the array
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i = 0; i<n; i++){
        mx = max(mx, arr[i]); // Using max function to find the maximum element
        
    }
    for(int i=0; i<n; i++){
        if(smx<arr[i] && arr[i]!=mx){ // Checking if the current element is greater than second max and not equal to max
            smx = arr[i]; // Updating second max if current element is greater
        }
    }
    cout<<mx<<endl; // Printing the maximum element of the array
    cout<<smx<<endl; // Printing the minimum element of the array
}