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

    int cnt=0;

    int l=0;
    while(l<n){
        int h=l+1;
        while(h<n){
            if(nums[l]>nums[h]){
                cnt++;
            }
            h++;
        }
        l++;
    }

    cout<<"Number of inversion "<<cnt;
    return 0;
}