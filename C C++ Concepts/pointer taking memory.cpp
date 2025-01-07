/*Whatever the data type is, Pointer takes same amount of memory.*/
#include<iostream>
using namespace std;

int main()
{   
    int *p1;
    double *p2;
    char *p3;
    float *p4;
    struct Rectangle *p5;
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}