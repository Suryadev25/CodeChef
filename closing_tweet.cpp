#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string arr[k];
    for(int i=0 ; i<n ; i++){
        for(int j=0;j<k;j++){
            cin>>arr[j];
            cout<<arr[j]<<endl;
        }
    }

    
    return 0;
}