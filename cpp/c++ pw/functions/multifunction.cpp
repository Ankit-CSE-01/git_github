#include<iostream>
using namespace std;

void usa(){
    cout<<"Hello USA"<<endl; // Function to print a greeting message
    return;
}
void india(){
    cout<<"Hello India"<<endl; // Function to print a greeting message
    usa();
}
int main(){
    cout<<"Hello World"<<endl; // Function to print a greeting message
    india();
    return 0;
}