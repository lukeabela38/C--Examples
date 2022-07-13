#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int a, b;

    std::cout << "Insert Numbers: ";
    std::cin >> a;
    std::cin >> b;

    std::cout << "\nMaximum selection: \n";
    std::cout << max(a, b);
    std::cout << "\nMinimum selection: \n";
    std::cout << min(a, b);

    std::cout << "\n" << sqrt(64);
    std::cout << "\n" << round(64.4);
    std::cout << "\n" << log(2);
}