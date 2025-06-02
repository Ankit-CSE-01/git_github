#include<iostream>
class B
{
    int a;
    public:
    int b;
    void get_ab();
    int get_a;
    void show_a();
};

class D:private B{
    int c;
    public:
    void mul(void);
    void display(void);
};

void B:: get_ab(void)
{
    a=5;b=10;
}

int B::get_a()
{
    return a;
}

void B::show_a()
{
    cout<<"a="a<<"\n";

}
void D::mul()
{
    get_ab();
    c=b*get_a();

}
void D::display()
{
    show_a();
    cout<<"b="<<b<<"\n";
    cout<<"c="<<c<<"\n";

}
int main(){
    D d;
    //d.get_ab();
    d.mul();
    //d.show_a();
    d.display();
    //d.b=20;
    d.mul();
    d.display();
    return 0;
}