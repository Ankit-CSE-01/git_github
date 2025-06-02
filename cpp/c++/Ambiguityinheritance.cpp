#include <iostream>
using namespace std;

class A {
    void func(){
        cout << "I am in Class A" << endl;
    }
};
class B {
    void func(){
        cout << "I am in Class B" << endl;
    }
};
class C: public A, public B{

};

int main(){
    C obj;
    obj.A::func();
    obj.B::func();
    return 0;
}