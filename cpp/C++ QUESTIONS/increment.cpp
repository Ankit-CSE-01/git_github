#include <iostream>
using namespace std;

class Number
{
    int x;
    public:
    Number(int n)
    {
        x=n;
    }
    void operator++()
    {
        cout<<"\n Prefix increment:";
        cout<<++x<<endl;
    }
    friend void operator--(Number);
};
void operator--(Number N)
{
    cout<<"\nPrefix decrement:";
    cout<<--N.x<<endl;
}

int main()
{
    Number N1(10), N2(20);
    ++N1;
    --N2;
    return 0;
}