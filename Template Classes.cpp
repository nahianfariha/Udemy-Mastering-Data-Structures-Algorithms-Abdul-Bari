#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a; 
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};
    template <class T>
    Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a=a;   //if we don't write "this" it will assign to itself only, means the perameter only and not the class member.
    this->b=b;
}
    template <class T>
    T Arithmetic<T> ::add()
    {
        T c;
        c=a+b;
        return c;
    }
    template <class T>
    T Arithmetic<T> ::sub()
    {
        T c;
        c=a-b;
        return c;
    }
int main()
{
    Arithmetic<double> ar(10.5,5);

    cout << "Add" << ar.add() << endl;
    cout << "Sub" << ar.sub() << endl;

    return 0;

}


