#include<iostream>
using namespace std;

int fact(int n)
{
    if(n<=1)
        return 1;
    return fact(n-1)*n;
}

int nCr(int n, int r)
{
    int num,den;
    num = fact(n);
    den= fact(r)*fact(n-r);
    return num/den;
}

int NCR(int n,int r) /*pascal's triangle*/
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main()
{
    cout<<nCr(5,2)<<endl;
    cout<<NCR(5,2)<<endl;
}