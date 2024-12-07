#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int length=0, breadth=0; //we initialized 0 here even when  we are taking input, because If the user forgets to enter values,
                             // length and breadth would still have valid values (0), avoiding undefined behavior. 
                             //Especially in case of big program it is helpful.

    printf("Enter length and breadth:\n");
    cin>>length>>breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);

    printf("Area:%d,Perimeter:%d",area,peri);

    return 0;

}

//Use return 0...
//in main() if you want to follow standard practice and ensure compatibility with older compilers. Otherwise, in modern C++, it’s optional.
//Using **return 0;** at the end of the main() function indicates that the program has successfully completed. In C++:
//return 0;: Means the program ended without errors.
//return 1; or other values: May indicate an error or a specific exit code.
//When NOT to Omit It:
//If you use an older C++ standard (before C++11).
//If you want to return specific error codes for debugging or system integration.
