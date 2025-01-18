#include<iostream>
using namespace std;

int main()
{
    char A[]= "How are you?";
    int i,word=1;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i] == ' ' && A[i-1] != ' ') //check if previous one is also space or not
        {
            word++;
        }   
    }
    cout<<"Words:"<<word;
    return 0;
}

