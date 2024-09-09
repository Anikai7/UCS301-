#include<iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;
    string s;
    cin>>s;

    for(auto i:s){
        st.push(i);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}