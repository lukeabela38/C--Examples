#include <iostream>
using namespace std;

int printResult(int var) {
    cout << var  << "\n";
    return 0;
}

int main() {
    
    const double a = 5.01;
    const double b = 2.99;

    double c;

    //Addition
    c = a + b;
    printResult(c);
    
    //Subraction
    c = a - b;
    printResult(c);

    //Multiplication
    c = a * b;
    printResult(c);

    //Division
    c = a/b;
    printResult(c);

    //Modulous
    c = 5%2;
    printResult(c);

    //Increment
    c++; 
    printResult(c);

    //Decrement
    c--;
    printResult(c);

}