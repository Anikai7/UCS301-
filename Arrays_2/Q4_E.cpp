#include<iostream>

using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    for(auto i = str.begin();i!=str.end();i++){
        *i = tolower(*i);
    }

    cout<<str;

    return 0;
}