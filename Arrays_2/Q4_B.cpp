#include<iostream>

using namespace std;

int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;

    int l = 0, h = str.size() - 1;
    while (l <= h)
    {
        int tem = str[l];
        str[l] = str[h];
        str[h] = tem;
        l++;
        h--;
    }

    cout<<str;
    return 0;
}