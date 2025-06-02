#include<iostream>
using namespace std;

template<class T>
void display(T s)
{
    cout<<"Template display:"<<x<<"\n";

}
template <class T1, class T2>
void display(T1 x, T2 y, T3 z){

}
void display(char y){
    cout<<"Explicit display:"<<y<<"\n";
}

int main(){
    display(100);
    display(56.78);
    display('x');
    display(5.98,'b',89);
    return 0;
}

//write a programe to create a tempalte function sum having two parameters of int type ,second sum function having two parameters of tempate function,create a third sum function having three parameters of float type , one more sum function having three parameters of template type