# include <iostream>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Toyota", "Masda"};
    int myNum[3] = {1, 2, 3};

    std::cout << myNum[2];
    std::cout << cars[2];

    std::cout << "Size of Variable array " << sizeof(myNum);
    int getArrayLength = sizeof(myNum) / sizeof(int);
    std::cout << "Actual Size of Array " << getArrayLength;

    return 0;
}