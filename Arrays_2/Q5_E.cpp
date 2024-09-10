#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the dimension of the symmetric matrix: ";
    cin >> n;

    vector<int> symmetric(n * (n + 1) / 2);

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "Enter element at (" << i + 1 << ", " << j + 1 << "): ";
            cin >> symmetric[k++];
        }
    }

    cout << "\nThe symmetric matrix is:\n";
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) {
                cout << symmetric[(i * (i + 1)) / 2 + j] << " ";
            } else {
                cout << symmetric[(j * (j + 1)) / 2 + i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


