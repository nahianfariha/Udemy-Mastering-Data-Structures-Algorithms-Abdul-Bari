#include <iostream>
using namespace std;
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r={3,5}; /*we can also just write Rectangle r={3,5};*/
    struct Rectangle *p=&r;
    cout<<r.length<<endl<<p->breadth<<endl;  /*use arroy not dot for pointer to access. */
}
