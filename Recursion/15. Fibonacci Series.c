#include<stdio.h>

/*int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-2)+fib(n-1);
}
*/

/*modified recursive function:Memoization*/
int F[10];    // Array for memoization
int fib(int n)
{
    if(n<=1)
    {
        F[n]=n; /*storing the valur for memoization*/
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=fib(n-2);
        if(F[n-1]==-1)
            F[n-1]=fib(n-1);
        return F[n-2]+F[n-1];
    }
        
}
int main()
{
    int i;
    for(i=0;i<10;i++)
        F[i]=-1;  // Initializing the memoization array with -1
    printf("%d",fib(7));  // Computing the 5th Fibonacci number
    return 0;
}

/*Memoization is a technique used to store the results of expensive function calls
 (like recursive calls in Fibonacci) and reuse them when the same inputs occur again. This avoids redundant calculations, improving efficiency.*/