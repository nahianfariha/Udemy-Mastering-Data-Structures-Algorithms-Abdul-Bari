/* reference is another name for variable. it is not a pointer.*/
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int &r = a;

    cout<<a<<endl<<r<<endl;
    return 0;
}