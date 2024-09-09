#include<iostream>
#include<vector>

using namespace std;

void push();
void pop();
void isEmpty();
void isFull();
void display();
void peek();

vector<int> st;

int main(){

    while (true){

        cout<<"1.push"<<endl
            <<"2.pop"<<endl
            <<"3.isEmpty"<<endl
            <<"4.isFull"<<endl
            <<"5.display"<<endl
            <<"6.peek"<<endl; 

        int menu;
        cin>>menu;

        if(menu == 1){
            push();
        }else if(menu == 2){
            pop();
        }else if(menu == 3){
            isEmpty();
        }else if(menu == 4){
            isFull();
        }else if(menu == 5){
            display();
        }else if(menu == 6){
            peek();
        }else{
            cout<<"Enter a valid menu"<<endl;
        }
    }

    return 0;
}

void push(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;

    st.push_back(num);

    return;
}

void pop(){
    if(st.size()>0){
    st.pop_back();
    }else{
        cout<<"Error!"<<endl;
    }

    return;
}

void isEmpty(){
    if(st.size()>0){
        cout<<"False"<<endl;
    }else{
        cout<<"True"<<endl;
    }

    return;

}

void isFull(){
    if(st.size()==0){
        cout<<"False"<<endl;
    }else{
        cout<<"True"<<endl;
    }

    return;
}

void display(){
    for(auto i:st){
        cout<<i<<" ";
    }
    cout<<endl;
}

void peek(){
    cout<<st[st.size()-1]<<endl;
}