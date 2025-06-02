#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter marks: ";
    cin>>x;
    if(x>=81 and x<=100)
    {
        cout<<"Very Good";
    }
    else if (x>=61)
    {
        cout<<"Good";
    }
    else if(x>=41)
    {
        cout<<"Average";
    }
    else if(x<=40)
    {
        cout<<"Fail";
    }
}





