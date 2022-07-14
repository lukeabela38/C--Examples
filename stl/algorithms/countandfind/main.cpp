#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Initialising vector with array values
    int arr[] = {10, 20, 5, 23, 42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout << "Occurrences of 20 in vector : ";
    cout << count(vect.begin(), vect.end(), 20);

    // find() returns iterator to last address if
    // element not present

    if (find(vect.begin(), vect.end(), 5) != vect.end()) {
        cout << "Element found!";
    }
    else {
        cout << "Element not found!";
    }
    return 0;    
}