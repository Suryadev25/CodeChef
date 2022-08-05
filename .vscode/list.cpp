#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,res=0;
        cin>>n;
        int arr[n];
        unordered_map<int , int> mp;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            // cout<<arr[i]<<" "<<endl;
        }
        for(int i=0 ; i<n ; i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            if(count<it.second){
                count = it.second;
                res = it.first;
            }
        }
        // cout<<"count is:"<<count<<endl;
        if(n==1 || count == n){
            cout<<"0"<<endl;
        }
        else if(count >= 2){
            cout<<(n-count+1)<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}