#include<iostream>
using namespace std;
template<class T>
class size
{
    T a,b;
    public:
    abc(T x, T y)
    {
        a = x;
        b = y;

    }
    T max1()
    {
        return (a=b? a:b);
    }

    int main()
    {
        abc<int>obj(10,20);
        cout<<"\nmax vlaue is "<<obj.max1();
        abc<float>obj1(10.2, 34.7);
        cout<<"\nmax value is "<<obj1.max1();
        abc<char>obj2;
    }
}