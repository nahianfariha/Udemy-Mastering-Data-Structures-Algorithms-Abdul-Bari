#include <iostream>    // For input-output
#include <fstream>     // For file operations
#include <string>      // For string handling
using namespace std;

// Function declaration
void displayMessage(string message);

// Class definition
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Member function
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Main function
int main() {
    // Basic I/O and data types
    int num = 10;
    float price = 99.99;
    char grade = 'A';
    bool isActive = true;

    cout << "Basic Data Types:" << endl;
    cout << "Integer: " << num << ", Float: " << price << ", Char: " << grade << ", Bool: " << isActive << endl;

    // Control Structures
    cout << "\nControl Structures:" << endl;
    if (num > 5) {
        cout << num << " is greater than 5" << endl;
    } else {
        cout << num << " is not greater than 5" << endl;
    }

    // Loops
    cout << "\nFor Loop Example:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }

    // Arrays
    cout << "\nArray Example:" << endl;
    int numbers[3] = {10, 20, 30};
    for (int i = 0; i < 3; i++) {
        cout << "Array Element " << i << ": " << numbers[i] << endl;
    }

    // Pointers
    cout << "\nPointer Example:" << endl;
    int* ptr = &num;
    cout << "Address of num: " << ptr << ", Value at address: " << *ptr << endl;

    // Dynamic Memory Allocation
    cout << "\nDynamic Memory Allocation:" << endl;
    int* dynamicNum = new int(100);
    cout << "Dynamic Value: " << *dynamicNum << endl;
    delete dynamicNum; // Free memory

    // File I/O
    cout << "\nFile I/O Example:" << endl;
    ofstream outFile("example.txt");
    if (outFile) {
        outFile << "This is a file output example." << endl;
        outFile.close();
    }

    ifstream inFile("example.txt");
    string fileContent;
    if (inFile) {
        while (getline(inFile, fileContent)) {
            cout << fileContent << endl;
        }
        inFile.close();
    }

    // Class and Object
    cout << "\nClass Example:" << endl;
    Person person("John Doe", 25);
    person.display();

    // Function Call
    displayMessage("This is a function call example!");

    return 0;
}

// Function definition
void displayMessage(string message) {
    cout << message << endl;
}
