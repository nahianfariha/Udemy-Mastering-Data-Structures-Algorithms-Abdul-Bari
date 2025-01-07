#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r= {2,4};
    r.breadth=1; /* by dot we can access the data*/
    cout<<r.breadth*r.length<<endl;
    
}