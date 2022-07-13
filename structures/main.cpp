#include <iostream>
using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
    // Structure - group related variables in one place
    // Each variable in structure is a member
    // Array can only have one data type
    // Structure can have multiple data types
    car myCar;
    myCar.brand = "Toyota ";
    myCar.model = "Yaris ";
    myCar.year = 2013;

    std::cout << myCar.brand;
    std::cout << myCar.model;
    std::cout << myCar.year;

    return 0;
}