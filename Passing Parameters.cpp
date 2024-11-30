#include<iostream>
using namespace std;

void swap(int *x, int *y) /*In C++, the void keyword in void swap(x, y) specifies the return type of the function. It indicates that the function does not return a value to the caller. Instead, the function performs its task and exits without producing a result that can be assigned or used.*/
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
int main()
{
    int num1=10,num2=15;
    swap(&num1,&num2);

    cout<<num1<<endl;
    cout<<num2<<endl;

    return 0;
}
/*this is an example of call  by address. */


/* call by value: 
What it is: A copy of the actual parameter's value is passed to the function. Changes made inside the function do not affect the original variable.
Use cases:
When you don’t want the function to modify the original data.
Suitable for small, primitive data types (e.g., integers, floats).
Example: Calculating results without needing to alter the input variables.

call by address:
What it is: A reference to the actual parameter is passed, allowing the function to modify the original variable.
Use cases:
When you need the function to modify the original variable.
Efficient for passing large data structures (e.g., arrays, objects) to avoid copying overhead.
Useful in scenarios like swapping two variables or filling data in a container. 
   
call by reference:
What it is: The address (pointer) of the actual parameter is passed, and the function uses this address to directly modify the variable or access data.
Use cases:
When working with dynamic memory or pointer-based data structures like linked lists and trees.
Used when passing arrays or implementing complex data manipulations.
Suitable for functions that need to interact with raw memory (e.g., in systems programming).


/*An example of call by reference:*/
/*#include<iostream>
using namespace std;

void swap(int &x, int &y)
{ 
    int temp;
    temp = x;
    x=y;
    y=temp;
}
int main()
{
    int num1=10,num2=15;
    swap(num1,num2);

    cout<<num1<<endl;
    cout<<num2<<endl;

    return 0;
}
*/