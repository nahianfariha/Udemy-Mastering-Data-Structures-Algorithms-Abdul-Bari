#include<iostream>
using namespace std;


struct Rectangle
{
private:
    int length;
    int breadth;

public:
Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}

void changeLength(int l)
{
    length=l;
}
};

int main()
{
    Rectangle r(10,5);
    cout<< r.area() <<endl;

    r.changeLength(20);
    cout<<r.area()<<endl;
    //cout<<r.changeLength()<<endl; can not print changeLength bcz it is a void function and does not return a value.

    return 0;
}