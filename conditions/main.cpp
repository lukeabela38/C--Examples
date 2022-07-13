# include <iostream>
using namespace std;

int main() {
    int a, b, c;

    std::cout << "Insert Variables: \n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b) {
        std::cout << "A greater than B";
    } else if (a < b) {
        std::cout << "B greater than A";
    } else {
        std::cout << "C is: " << c;
    }

    int day = 4;

    switch(day) {
        case 1:
            std::cout << "\nMonday";
            break;
        case 2:
            std::cout << "\nTuesday";
            break;
        case 3:
            std::cout << "\nWednesday";
            break;
        case 4: 
            std::cout << "\nThursday";
            break;
        case 5:
            std::cout << "\nFriday";
            break;
        case 6:
            std::cout << "\nSaturday";
            break;
        case 7:
            std::cout << "\nSunday";
            break;
    }

    return 0;
}