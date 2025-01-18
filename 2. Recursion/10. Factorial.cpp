#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    return factorial(n-1)*n;
}
int ifactorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

int main()
{
    int r,p;
    r=factorial(5);
    p=ifactorial(5);
    cout<<r<<endl;
    cout<<p<<endl;
}