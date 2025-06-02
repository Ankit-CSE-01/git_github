#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]); // it gives the number of elements in the array
    int x;
    cout<<"Enter the target: ";
    cin>>x;
    bool flag = false; // Initializing a boolean variable to false
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            flag = true; // If the element is found, set flag to true
            // cout<<"Element found at index: "<<i<<endl; // Printing the values of the array
            break;
            }
        // else if(i==n-1){
        //     cout<<"Element not found"<<endl; // Printing the values of the array
        }
        if(flag==true) cout<<x<<" is present."; // Printing the values of the array
        else cout<<x<<" is not present"; // Printing the values of the array
}
