#include <iostream>
#include <stack>

using namespace std;

int main()
{

    string usr_inpt;
    cin >> usr_inpt;

    stack<char> op;

    string out;

    for (auto i : usr_inpt)
    {
        if (i >= '0' && i <= '9')
        {
            out.push_back(i);
        }
        else
        {
            op.push(i);
        }
    }

    stack<int> op2;

    while (!op.empty())
    {
        char tem = op.top();
        op.pop();
        op2.push(tem);
    }

    while(!op2.empty()){
        char tem = op2.top();
        op2.pop();
        out.push_back(tem);
    }

    cout << out << endl;
}