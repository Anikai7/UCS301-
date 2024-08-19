#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;

    sort(str.begin(),str.end());

    cout<<str;
}