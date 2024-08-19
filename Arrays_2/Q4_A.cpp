#include<iostream>

using namespace std;

string conc(string,string);

int main(){
    string first,second;
    cout<<"Enter String: ";
    cin>>first;
    cout<<"Enter String: ";
    cin>>second;

    cout<<conc(first,second);

    return 0;
}

string conc(string a,string b){
    for(auto i:b){
        a.push_back(i);
    }

    return a;
}