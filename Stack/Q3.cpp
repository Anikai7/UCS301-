#include<iostream>
#include <stack>

using namespace std;

bool isValid(string);

int main(){

    string usr;
    cin>>usr;

    cout<<isValid(usr);

}

bool isValid(string s) {

        if ((s.length()) % 2 != 0) {
            return false;
        }

        stack<char> st;

        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[') {
                st.push(i);
            } else {
                if (st.size() == 0) {
                    return false;
                }
                char tem = st.top();
                if (tem == '(') {
                    if (i != ')') {
                        return false;
                    }
                } else if (tem == '{') {
                    if (i != '}') {
                        return false;
                    }
                } else {
                    if (i != ']') {
                        return false;
                    }
                }
                st.pop();
            }
        }

        if (st.size() != 0) {
            return false;
        }

        return true;
    }