#include <iostream>
using namespace std;

void a();

int main()
{
    a();
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
