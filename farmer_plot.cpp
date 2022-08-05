// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n , m;
//         cin>>n>>m;
//         int ans=0;
//         ans = m*n;
//      cout<< ans/(__gcd(n,m)*__gcd(n,m))<<endl;
    
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int hcf=0;
        for(int i=1 ; i<=m ; i++){
            if(n%i==0 && m%i==0){
                hcf = i;
            }
        }
        int ans = (n/hcf)*(m/hcf);
        cout<<ans<<endl;
    }
    return 0;
}