#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;
public:
    Rectangle() {length=breadth=1;}
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength(){return length;}
    void setLength(int l){length=l;}
    ~Rectangle(); //Declares a destructor to clean up resources when a rectangle object is destroyed.
};

Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

Rectangle::~Rectangle()
{
     cout<<"Destructor";
}

int main()
{
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setLength(15);
    cout<<r.getLength()<<endl;

}


/*why member functions are declared inside the class and definitions outside?
1.Declaring member functions inside the class gives a quick overview of what the class can do.
2.Defining them outside keeps the class declaration clean and easier to understand, especially for large classes.
3.If the class is declared in a header file (Rectangle.h) and the function definitions are in a separate implementation file (Rectangle.cpp), 
other files can include the header without seeing the full implementation. This promotes modularity.
4.When member function definitions are in a separate .cpp file, only that file needs recompilation if changes are made. 
This speeds up the build process in larger projects.
5.Helps hide implementation details from other parts of the program.
6.Definitions can make the class declaration look cluttered.
7.Easier to manage the header and implementation files separately.*/