#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums;
    int n=0;
    cout<<"Enter num of elements: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int tem = 0;
        cout<<"Enter elements: ";
        cin>>tem;
        nums.push_back(tem);
    }

    sort(nums.begin(),nums.end());
    int cnt=0;

    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            cnt++;
        }
    }

    cout<<"Unique elements are "<<n-cnt;
    return 0;
}