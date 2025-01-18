#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{   int A[4]={2,3,4,5};
    int *p;
    p=A; /* dont use ampersand(&) in case of array */
    
    for(int i=0; i<4; i++) 
    {
        cout<<p[i]<<endl;
    }

    return 0;
}