#include<iostream>

using namespace std;

string rmv(string);

int main(){
    string s;
    cout<< "Enter the string: ";
    cin>>s;

    cout<<rmv(s);

    return 0; 
}

string rmv(string s){
    string str;
    for(auto i:s){
        char tem = tolower(i);
        if(tem != 'a' && tem!='e' && tem!='i' && tem!='o' && tem!='u'){
            str.push_back(i);
        }
    }

    return str;
}