#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter size of square matrix: ";
    cin>>size;
    vector<vector<int>> ans;

    for(int i=0;i<size;i++){
        vector<int> tri;
        for(int j=0;j<i;j++){
            int tem=0;
            cout<<"Enter Element: ";
            cin>>tem;
            tri.push_back(tem);
        }
        ans.push_back(tri);
    }

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}