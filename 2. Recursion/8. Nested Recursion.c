/* where recursive call is taking another recursive call as a parameter.*/

#include<stdio.h>

int fun(int x)
{
    if(x>100)
        return x-10;
    return fun(fun(x+11));
}

int main()
{
    int r;
    r=fun(90);
    printf("%d",r);
    return 0;
}