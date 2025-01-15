#include<stdio.h>

double e(int x,int n)
{
    static double s; /*e is implemented recursively. The static keyword ensures that the variable s does not get reinitialized to 0 (its default value for uninitialized variables) every time the function is called. */
    if(n==0)
        return s;
    s=1+s*x/n;
    return e(x,n-1);
}

int main()
{
    printf("%lf",e(1,10));
    return 0;
}