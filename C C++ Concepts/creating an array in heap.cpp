#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{   
    int *p;
    p=new int[3];

    p[0]=10; p[1]=2; p[2]=5;
    
    for(int i=0; i<3; i++)
    {
        cout<<p[i]<<endl;
    }
    /*for releasing memory
    delete [] p; in c++ and free(p) in c*/
    delete [] p;
    return 0;
}

/* Benefits of Releasing Heap Memory:
Prevents Memory Leaks - Frees unused memory, avoiding crashes and slow performance.
Efficient Memory Use - Allows memory to be reused for other tasks.
Reduces Fragmentation - Keeps memory organized and prevents waste.
Proper Cleanup - Calls destructors for objects, releasing resources like files or connections.
Supports Large Programs - Helps manage memory in big applications, like games and databases.
Improves Debugging - Avoids dangling pointers and makes errors easier to detect.
Cross-Platform Compatibility - Works consistently across different systems.*/