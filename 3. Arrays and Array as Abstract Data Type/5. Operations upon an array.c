#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size_capacity;
    int length;
};

void Display(struct Array arr)
{ 
    int i;
    printf("\nElements are:\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}

int main()
{
    struct Array arr;
    int i,n;
    printf("Enter the size of the array:");
    scanf("%d",&arr.size_capacity);
    arr.A=(int *)malloc(arr.size_capacity*sizeof(int));
    arr.length=0;

    printf("Enter number of numbers:");
    scanf("%d",&n);

    printf("Enter all elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    arr.length=n;

    Display(arr);
    
    return 0;
    }
}