#include<stdio.h>

int sum(int n)  /*when the function is recursive*/
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int isum(int n)  /*when the function is iterative*/
{
    int i, s=0;
    for(i=1;i<=n;i++)
        s=i+s;
    return s;
    
}
int main()
{
    int x;
    x=isum(5);
    printf("%d",x);
    return 0;
}
