#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,9,2,3,4};
    int *P;
    int i;

    P=new int[5];
    P[0]=2;
    P[1]=3;
    for(i=0;i<5;i++)
    {   
        cout<<A[i]<<",";
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        cout<<P[i]<<",";
    }
    delete []P;

}