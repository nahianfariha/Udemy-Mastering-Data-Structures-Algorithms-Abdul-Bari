#include<iostream>
using namespace std;
/*How to pass an array: */
/*
void fun(int A[],int n){
    for(int i=0;i<n;i++)
    cout<<A[i]<<endl;
}
int main()
{
    int A[] = {2,5,6,9,7};
    int n=5;
    fun(A,n);

    for (int x:A) 
    cout<<x<<endl;
    
    return 0;
}
*/

/*Creating an array inside a function and returning it's address. */
int * fun(int size)
{
    int *p;
    p=new int[size];
    
    for(int i=0;i<size;i++)
    p[i]=i+1;
    return p;
}
int main()
{
    int *ptr,sz=5;
    ptr=fun(sz);
    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    
    return 0;
}
/*if we create anything in heap,and a pointer is available it can be accessed from anywhere of the program*/