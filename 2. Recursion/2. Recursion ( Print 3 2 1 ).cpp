#include <iostream>
using namespace std;

void fun1(int n)
{
    if ( n > 0 )
    {
        printf("%d\n",n);
        fun1(n-1);
    }
}

int main()
{
    int x=3;
    fun1(x);
}