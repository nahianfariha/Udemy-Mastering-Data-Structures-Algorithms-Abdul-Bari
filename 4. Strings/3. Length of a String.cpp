#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    char S[]="Wecome";
    int length;
    for(int i=0;S[i]!='\0';i++)
    {
        length++;
    }
    printf("Length is %d\n",length);
    return 0;
}