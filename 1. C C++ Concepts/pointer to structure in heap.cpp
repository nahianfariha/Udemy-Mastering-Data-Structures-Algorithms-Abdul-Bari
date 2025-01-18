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
    struct Rectangle *p;
    p=new Rectangle; /* for C : p=(struct Rectangle *)malloc(sizeof(struct Rectangle))*/

    p->breadth=4;
    cout<<p->length<<endl<<p->breadth<<endl;  /*use arroy not dot for pointer to access. */
}
