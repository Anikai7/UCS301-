#include <iostream>
#include <vector>

using namespace std;

int main() {
    int dim;

    cout << "Enter the dimension of the symmetric matrix: ";
    cin >> dim;

    vector<vector<int>> matrix(dim);

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j <= i; j++) {
            int val;
            cout << "Enter Element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> val;
            matrix[i].push_back(val);
        }
    }

    cout << "The symmetric matrix is: "<<endl;
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            if (j <= i) {
               
                cout << matrix[i][j] << " ";
            } else {
                cout << matrix[j][i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

