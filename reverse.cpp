#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, reverse=0;
        cin>>n;
        while(n>0){
       reverse = reverse*10 + n%10;
       n = n/10;
        }
        cout<<reverse<<endl;
    }
    return 0;
}