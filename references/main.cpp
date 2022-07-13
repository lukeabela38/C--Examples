#include <iostream>
using namespace std;

int main() {

    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n"; //variable
    cout << &meal << "\n"; //memory address
}