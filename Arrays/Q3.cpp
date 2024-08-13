#include <iostream>
using namespace std;

void a();
void b();
void c();

int main()
{
    a();
    b();
    c();
    return 0;
}

void a()
{
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }

    int l = 0, h = n - 1;
    while (l <= h)
    {
        int tem = arr[l];
        arr[l] = arr[h];
        arr[h] = tem;
        l++;
        h--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return;
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

void c(){
    int rows, cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];
    int result[rows][cols];

    cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }

    cout<<"Original Matrix"<<endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Transpose Matrix"<<endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
      
}