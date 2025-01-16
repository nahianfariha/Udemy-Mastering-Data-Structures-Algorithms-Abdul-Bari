#include<iostream>
using namespace std;
int main()
{
    int *p =new int[5];
    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
    int *q=new int[10];  //Allocate memory for 10 elements

    for(int i=0;i<5;i++) // Copy elements from `p` to `q`
    {   
        q[i]=p[i];
    }
    delete []p; //before pointing on q , free p spaces;
    p=q;
    q=NULL;

    for (int i = 5; i < 10; i++)  // Initialize the remaining elements of the resized array
    {
        p[i] = 0; // Assign 0 or any default value to new elements
    }

    for (int i = 0; i < 10; i++) // Print all 10 elements of the resized array
    {
        cout << p[i] << endl;
    }
    delete [] p;
    return 0;

}

/*
Why Can't the Size of a Static Array Be Increased?
Fixed Memory Allocation:
The size of a static array is determined at compile time, and memory is allocated in a contiguous block on the stack.
Increasing the size would require additional memory next to the array's current location, but this memory may already be occupied by other variables.
Stack Constraints:
The stack is limited in size and not designed for dynamic memory management. Resizing would require shifting data or reallocation, which isn't feasible 
on the stack.
Compiler Design:
The compiler generates machine code assuming the size of the array is fixed. Allowing dynamic resizing would make this optimization impossible.


Dynamic arrays, unlike static arrays, can be resized because they are allocated on the heap, where memory is more flexible. However, resizing a dynamic 
array involves:
Allocating New Memory: A new larger block of memory is allocated.
Copying Existing Elements: All the elements from the old array are copied into the new block.
Freeing Old Memory: The old memory block is deallocated.
Example: this code.
*/