#include<stdio.h>

#include<iostream>
using namespace std;

int main()
{
    char A[5];
    char B[5]={'A','B','C','D','E'};
    char C[ ]={'A','B','C','D','E'};
    char D[5]={65,66,67,68,69};
    char E[5]={'A','B'};
  
    for(int i=0;i<5;i++)
    {
        cout<<C[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<B[i];
    }
    char name[10]={'J','o','h','n','\0'};
    scanf("%S",name); //gets(name); is used if there are more than one word with a space
    printf("%S",name);
   
    
}


