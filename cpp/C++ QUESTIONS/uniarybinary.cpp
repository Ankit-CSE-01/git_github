#include <iostream>
using namespace std;

class binary 
{
    int x,y;
    public:
    binary(int x1, int y1)
}
x=x1;
y=y1;
}
friend binary operator+(binary,binary);
void show_data()
{
    cout<<x<<" "<<y<<"\n";
}
};
binary operator+(bianry o1, bianry o2)
{
    binary temp;
    temp.x=o1.x+o2.x;
    temp.y=o1.y+o2.y;
    return temp;
}
// {
//     private:
//     int x,y,z;
//     public:
//     number(int n, int n1, int n2)
//     {
//         x=n;
//         y=n1;
//         z=n2;
//         cout<<"\n Before overloading:";
//         cout<<x<<endl;
//         cout<<y<<endl;
//         cout<<z<<endl;
//     }
//     friend void operator-(number);
// };

// void operator-(number obj)
// {
//     cout<<"\n After overloading:";
//     cout<<-obj.x<<endl;
//     cout<<-obj.y<<endl;
//     cout<<-obj.z;
// }

int main()
{
    // number n(7,8,9);
    
    // operator-(n);

    binary o1(1,2),o2(3,4),o3;
    o3=o1+o2;
    o3.show_data();
}

