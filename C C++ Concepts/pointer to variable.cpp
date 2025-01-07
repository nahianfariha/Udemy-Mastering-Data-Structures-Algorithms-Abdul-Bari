#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{   int a=10;
    int *p;
    p=&a; /* in case of pointer to some varible a, dont use * */

    cout<<a<<endl;
    printf("%d  %p  %p",*p,p,&a); /* %p is used for printing pointer (address) values in hexadecimal format, which matches the type of p and &a. */

    return 0;
}