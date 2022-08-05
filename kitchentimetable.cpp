#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
// cout<<t;
while(t--){
    int n;
    cin>>n;
    // cout<<n;
    int A[n],B[n], ans=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        // cout<<A[i];
    }
    for(int j=0;j<n;j++){
        cin>>B[j];
        // cout<<B[j];
    }
    int C[n];
    C[0] = A[0] - 0;
    for(int i=1 ; i<n ; i++){
        C[i] = A[i]-A[i-1];
    }

    for(int k=0 ; k<n ; k++){
      if (B[k] <=  C[k]){
    // if((A[k]-A[k-1]) >= B[k]){
             ans++;
             
      }
     }
    cout<<ans<<endl;
    
}
	return 0;
}