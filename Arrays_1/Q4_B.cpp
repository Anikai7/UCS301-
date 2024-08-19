#include<iostream>

using namespace std;

void b();

int main(){
    b();
    return 0;
}

void b()
{
    int i, j;

    cout << "Enter dimensions of 1st matrix (rows and columns):" << endl;
    cin >> i >> j;

    int matrix1[i][j];

    cout << "Enter elements of Matrix 1:" << endl;
    for (int x = 0; x < i; x++) {
        for (int z = 0; z < j; z++) {
            cin >> matrix1[x][z];
        }
    }

    int b;

    cout << "Enter number of columns for 2nd matrix:" << endl;
    cin >> b;

    int matrix2[j][b];

    cout << "Enter elements of Matrix 2:" << endl;
    for (int x = 0; x < j; x++) {
        for (int y = 0; y < b; y++) {
            cin >> matrix2[x][y];
        }
    }

    int ans[i][b];

    for (int l = 0; l < i; l++) {
        for (int m = 0; m < b; m++) {
            ans[l][m] = 0;
            for (int n = 0; n < j; n++) {
                ans[l][m] += matrix1[l][n] * matrix2[n][m];
            }
        }
    }


    cout << "Resultant Matrix:" << endl;
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < b; y++) {
            cout << ans[x][y] << " ";
        }
        cout << endl;
    }

    return;
}