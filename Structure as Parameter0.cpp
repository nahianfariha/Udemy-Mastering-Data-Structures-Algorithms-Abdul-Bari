#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
void fun(struct Rectangle r1)
{
    cout<<r1.length<<endl<<r1.breadth<<endl;
}
int main()
{
    struct Rectangle r={10,5};
    fun(r);
    cout<<r.length<<endl<<r.breadth;

    return 0;
}
