#include<iostream>
#include <stack>

using namespace std;

int main(){

    string usr_inpt;
    cin>>usr_inpt;

    stack<char> op;
    stack<int> num;

    for(auto i:usr_inpt){
        if(i>='0' && i<='9'){
            num.push(((int)i)-48);
        }else{
            op.push(i);
        }
    }

    int ans=num.top();
    num.pop();

    while(!op.empty()){
        char oper = op.top();
        op.pop();
        int a = num.top();
        num.pop();
        if(oper == '+'){
            ans+=a;
        }else if(oper == '-'){
            ans-=a;  
        }else if(oper == '*'){
            ans*=a;
        }else{
            ans/=a;
        }
    }

    cout<<ans<<endl;

    return 0;
}