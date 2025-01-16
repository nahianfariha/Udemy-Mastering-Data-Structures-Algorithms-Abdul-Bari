#include<iostream>
using namespace std;


int main()
{
    //a fixed-size 2D array. The size is determined at compile-time, and memory for the entire array is allocated in the stack.(stack)
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }

    //an array of 3 pointers, where each pointer points to a dynamically allocated array of size 4. This allows dynamic allocation of rows.(stack,heap)
    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<B[i][j];
        }
        cout<<endl;
    }

    //a pointer to a pointer, used to create a fully dynamic 2D array. Both rows and columns are allocated dynamically.(heap)
    int **C;
    C= new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<C[i][j];
        }
        cout<<endl;
    }

}