#include<iostream>
using namespace std;

int npow(int m,int n);

int pow(int m,int n)
{
    if(n==0)          /* here, m=2, n=9; 2^0=1; 2^8.2 */
        return 1;
    return pow(m,n-1)*m;   /*This relationship is used in the recursion.If you were to use return pow(m, n) instead of return pow(m, n-1) * m, 
                            the function would never reduce n, causing infinite recursion*/
}

int npow(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return npow(m*m,n/2);
    else
        return m*npow(m*m,(n-1)/2);
}

int main()
{
    int r = pow(2,9);
    int k =npow(2,9);
    cout<<k<<endl;
    cout<<r<<endl;
}