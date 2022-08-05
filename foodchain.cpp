#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int e,k,n=0;
        cin>>e>>k;
    
    while(e>0){
        e=e/k;
        n++;
    }
    cout<<n<<endl;
    
    }
    return 0;
}