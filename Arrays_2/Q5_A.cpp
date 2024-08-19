#include<iostream>

using namespace std;

int main(){
    int dia;
    cout<<"Enter the size of diagonal matrix: ";
    cin>>dia;
    int arr[dia];
    for(int i=0;i<dia;i++){
        cout<<"Enter the elements of diagonal: ";
        cin>>arr[i];
    }
    for(int i=0;i<dia;i++){
        for(int j=0;j<i;j++){
            cout<<0;
        }
        cout<<arr[i];
        for(int k=i;k<dia-1;k++){
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}