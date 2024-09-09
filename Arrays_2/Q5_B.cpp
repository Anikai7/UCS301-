#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the dimension of the tri-diagonal matrix: ";
    cin >> n;

    vector<int> lower(n - 1), diag(n), upper(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cout << "Enter element at (" << i + 2 << ", " << i + 1 << "): ";
        cin >> lower[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter element at (" << i + 1 << ", " << i + 1 << "): ";
        cin >> diag[i];
    }

    for (int i = 0; i < n - 1; i++) {
        cout << "Enter element at (" << i + 1 << ", " << i + 2 << "): ";
        cin >> upper[i];
    }

    cout << "The tri-diagonal matrix is: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << diag[i] << " ";
            } else if (i == j + 1) {
                cout << lower[j] << " ";
            } else if (i + 1 == j) {
                cout << upper[i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}