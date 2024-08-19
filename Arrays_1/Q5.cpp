#include<iostream>

using namespace std;

int main(){

    int i,j;
    cout<<"Enter Number of row and column"<<endl;
    cin>>i;
    cin>>j;

    int arr[i][j];

    cout<<"Enter Elements"<<endl;

    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cin>>arr[x][y];
        }
    }

    
    int total=0;

    cout<<"Sum of rows"<<endl;

    for(int k=0;k<i;k++){
        total=0;
        for(int l=0;l<j;l++){
            total += arr[k][l];
        }
        cout<<total<<" ";
    }

    cout<<endl;

    cout<<"Sum of column"<<endl;

    for(int k=0;k<i;k++){
        total=0;
        for(int l=0;l<j;l++){
            total += arr[l][k];
        }
        cout<<total<<" ";
    }

    return 0;
}
