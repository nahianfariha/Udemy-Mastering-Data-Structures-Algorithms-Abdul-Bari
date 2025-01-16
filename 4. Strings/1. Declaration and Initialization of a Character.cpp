#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    char temp;
    temp='A'; //or char temp='A';

    printf("%c\n",temp);
    cout<<temp;
}

//wrong ways: temp="A"; temp=A; temp='AB'
//ASCII for A is 65. temp actually storing the code 65.