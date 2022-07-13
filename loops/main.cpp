# include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    do {
        cout << i << "\n";
        i++;
    }
    while (i < 20);
    
    for (int j = 0; j < 5; j++) {
        cout << j << "\n";
    }
    
    return 0;


}