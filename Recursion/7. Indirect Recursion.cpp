#include <iostream>
using namespace std;

void funB(int n); 

void funA(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        funB(n-1);
    }
}

void funB(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        funB(n/2);
    }
}
int main()
{
    funA(20);
    return 0;
}

/*The reason for declaring void funB(int n); : A function declaration (or prototype) tells the compiler that a function exists, 
what its return type is, and what parameters it takes. This is necessary if you call a function before it is defined in the code.
The definition of funA comes before its first use in the program. This means the compiler already knows what funA is when it encounters it.
However, inside funA, you call funB. At that point, the compiler hasn’t yet seen the definition of funB. Without a prior declaration of funB,
the compiler would throw an error, saying it doesn’t recognize the function.*/