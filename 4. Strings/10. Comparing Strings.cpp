#include<iostream>
using namespace std;
int main()
{
    char A[]="Painter";
    char B[]="Painting";
    int i,j;
    for(i=0,j=0;A[i]!='\0'&& B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
        {
            break;
        }
        else if(A[i]==B[j])
        {
            cout<<"Equal";
        }
        else if(A[i]<B[j])
        {
            cout<<"Smaller";
        }
        else
        {
            cout<<"Greater";
        }
        break; //break stops it from printing 'equal' 5 times 
    }
    
}