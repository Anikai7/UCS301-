#include <iostream>
#include <vector>

using namespace std;

int* create(int&);
void display(int*, int);
int* insrt(int*, int&, int);
int* dlt(int*, int&, int);
int search(int*, int, int);

int main() {
    int oper;
    int* ptr = nullptr;
    int size = 0;

    while (true) {
        cout << "Enter menu number" << endl;
        cin >> oper;

        if (oper == 1) {
            delete[] ptr;
            ptr = create(size);
        } else if (oper == 2) {
            display(ptr, size);
        } else if (oper == 3) {
            int newElem;
            cout << "Enter new element" << endl;
            cin >> newElem;
            ptr = insrt(ptr, size, newElem);
        } else if (oper == 4) {
            int delElem;
            cout << "Enter element to delete" << endl;
            cin >> delElem;
            ptr = dlt(ptr, size, delElem);
        } else if (oper == 5) {
            int searchElem;
            cout << "Enter element to search" << endl;
            cin >> searchElem;
            int index = search(ptr, size, searchElem);
            if (index != -1) {
                cout << "Element found at index: " << index << endl;
            } else {
                cout << "Element not found" << endl;
            }
        } else if (oper == 6) {
            delete[] ptr;
            return 0;
        } else {
            cout << "Menu doesn't exist" << endl;
        }
    }

    return 0;
}

int* create(int& size) {
    cout << "Enter number of elements" << endl;
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    return arr;
}

void display(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* insrt(int* arr, int& size, int newElem) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    newArr[size] = newElem;
    size++;
    delete[] arr;
    return newArr;
}

int* dlt(int* arr, int& size, int delElem) {
    int* newArr = new int[size - 1];
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != delElem) {
            newArr[newSize++] = arr[i];
        }
    }

    delete[] arr;
    size = newSize;
    return newArr;
}

int search(int* arr, int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            return i;
        }
    }
    return -1;
}