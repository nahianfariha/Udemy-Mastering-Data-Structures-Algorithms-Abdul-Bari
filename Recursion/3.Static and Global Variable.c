#include <stdio.h>

/* int x=0; when global.*/

int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int r=fun(5);
    printf("%d\n",r);

    int v=fun(5);
    printf("%d\n",v);
    return 0;
}