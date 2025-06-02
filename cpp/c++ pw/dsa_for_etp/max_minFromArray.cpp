#include<iostream>
// #include <climits>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter Array Size: "; //number of elements in array
    // cin>>n;
    int arr[] = {1, 2, 3, 4, 5}; // Initializing an array with values
    int n = sizeof(arr)/sizeof(arr[0]); // it gives the number of elements in the array
    //int mx = arr[0]; // Initializing max with first element of the array
    int mx = INT_MAX;
    int mn = INT_MIN; 
    // for(int i = 0; i<n; i++){
    //     cout<<"Enter element: "; // taking input from user
    //     cin>>arr[i]; // taking input from user
    // }
    // for(int i = 0; i<n; i++){
    //    cout<<arr[i]<<" "; // prints the elements of the array
    // }
    // for(int i = 0; i<n; i++){
    //     // if(arr[i]>mx){ // Checking if the current element is greater than max
    //     //     mx = arr[i]; // Updating max if current element is greater
    //     // }
    //     mx = max(mx, arr[i]); // Using max function to find the maximum element
    // }
    cout<<mx; // Printing the maximum element of the array
    cout<<mn; // Printing the minimum element of the array
}