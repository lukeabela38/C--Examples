#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // Initialising vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    // Sort the array to make sure that the lower_bound()
    // and the upper_bound() work.
    sort(vect.begin(), vect.end());

    // Returns the first occurrence of 20
    auto q = lower_bound(vect.begin(), vect.end(), 20);

    // Returns last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);

    cout << "The lower is at position: ";
    cout << q-vect.begin() << endl;

    cout << "The upper is at position: ";
    cout << p-vect.begin() << endl;

    return 0;
}