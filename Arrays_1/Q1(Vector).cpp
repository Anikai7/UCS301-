#include<bits/stdc++.h>

using namespace std;

vector<int> create();
void display(const vector<int>&);
void insert(vector<int>&, int);
void dlt(vector<int>&, int);
int search(const vector<int>&, int);

int main() {
    int oper;
    vector<int> vec;

    while (true) {
        cout << "Enter menu number" << endl;
        cin >> oper;

        if (oper == 1) {
            vec = create();
        } else if (oper == 2) {
            display(vec);
        } else if (oper == 3) {
            int newElem;
            cout << "Enter new element" << endl;
            cin >> newElem;
            insert(vec, newElem);
        } else if (oper == 4) {
            int delElem;
            cout << "Enter element to delete" << endl;
            cin >> delElem;
            dlt(vec, delElem);
        } else if (oper == 5) {
            int searchElem;
            cout << "Enter element to search" << endl;
            cin >> searchElem;
            int index = search(vec, searchElem);
            if (index != -1) {
                cout << "Element found at index: " << index << endl;
            } else {
                cout << "Element not found" << endl;
            }
        } else if (oper == 6) {
            return 0;
        } else {
            cout << "Menu doesn't exist" << endl;
        }
    }

    return 0;
}

vector<int> create() {
    int size;
    cout << "Enter number of elements" << endl;
    cin >> size;

    vector<int> vec(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter element: ";
        cin >> vec[i];
    }

    return vec;
}

void display(const vector<int>& vec) {
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}

void insert(vector<int>& vec, int newElem) {
    vec.push_back(newElem);
}

void dlt(vector<int>& vec, int delElem) {
    vec.erase(remove(vec.begin(), vec.end(), delElem), vec.end());
}

int search(const vector<int>& vec, int elem) {
    auto it = find(vec.begin(), vec.end(), elem);
    if (it != vec.end()) {
        return distance(vec.begin(), it);
    } else {
        return -1;
    }
}
