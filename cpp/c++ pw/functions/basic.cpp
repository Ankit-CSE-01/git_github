#include<iostream>
using namespace std;

void greet(){
    cout<<"Good Morning!"<<endl; // Function to print a greeting message
    cout<<"How are you!"<<endl; // Function to print a greeting message
}
int main() {
    greet(); // Calling the greet function to print the greeting message
    cout<<"Hey"<<endl;
    greet();
    return 0; // Indicating that the program has ended successfully
}   