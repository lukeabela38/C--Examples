# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

int main() {
    // Initialising vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout << "Given vector is: \n";
    for (int i=0; i<n; i++) {
        cout << vect[i] << " ";
    }

    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
}