/*  Exponential Function, e^x=1+x+(x^2)/2!+(x^3)/3!+...=∞n=0∑(x^n)/n!  ​*/

#include<iostream>
using namespace std;

int e(int x,int n)
{
    static double p=1,f=1;
    double r;

    if(n==0) 
        return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int main()
{
    cout<<e(3,10)<<endl;
}