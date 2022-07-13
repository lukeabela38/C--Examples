#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Hello ";
    const string obiwan = "there \n";

    std::cout << greeting + obiwan;

    string trolling = greeting.append(obiwan);
    std::cout << trolling;

    //Notably '+' can be used for both addition and concatenation

    std::cout << "The Length of the string we previously created is " << trolling.length();
    std::cout << "\nSimilarly you could try .size() instead of .length(): " << trolling.size();

/*
    string firstName;
    std::cout << "\nWhat is your first name: ";
    cin >> firstName;
    std::cout << "\nYour first name: " << firstName;
*/
    string fullName;
    std::cout << "\nWhat is your full name: ";
    getline(cin, fullName);
    std::cout << "\nYour full name: " << fullName;

    return 0;

}