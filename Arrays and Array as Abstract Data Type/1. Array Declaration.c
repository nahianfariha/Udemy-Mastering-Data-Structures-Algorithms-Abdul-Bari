#include<stdio.h>
int main()
{
    int A[5];
    int B[5]={2,4,6,8,10};
    int C[10]={2,3,4};
    int D[5]={0};
    int E[]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {   
        printf("%d,%u",B[i]); //%u prints the addresses
    }

}