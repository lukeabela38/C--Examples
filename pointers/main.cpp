#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << "\nVariable: " << food;
    cout << "\nMemory address: " << &food;
    cout << "\nPointer: " << ptr;
    cout << "\nDereferenced Pointer: " << *ptr;

}