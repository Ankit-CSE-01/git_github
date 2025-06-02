#include <iostream>
using namespace std;

int gcd(int x,int y){
    for(int i=x;i>0;i--){
        if(x%i==0 && y%i==0){
            return i;
        }
    }
    return 0;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<x*y/gcd(x,y);
}