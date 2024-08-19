#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter size of square matrix: ";
    cin>>size;
    vector<vector<int>> ans;

    for(int i=0;i<size;i++){
        vector<int> tri;
        for(int j=size-1;j>=i;j--){
            int tem=0;
            cout<<"Enter Element: ";
            cin>>tem;
            tri.push_back(tem);
        }
        ans.push_back(tri);
    }

    for(int i=0;i<ans.size();i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}