#include<bits/stdc++.h>
#define chai(x,a,b) for(int x = a ; x<b ; x++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n] , max=0;
   chai(i,0,n){
        cin>>arr[i];
    }
    chai(j,0,n){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    cout<<max<<endl;
}
return 0;
}