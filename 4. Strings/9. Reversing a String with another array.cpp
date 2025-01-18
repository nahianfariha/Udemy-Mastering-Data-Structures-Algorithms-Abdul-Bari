#include <iostream>
using namespace std;

int main()
{
    char A[] = "PYTHON";
    char B[7];
    int i=0, j=0;
    while(A[i]!='\0')
    {
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        B[j]=A[i];
        j++;
    }
    cout<<B;
    return 0;
}