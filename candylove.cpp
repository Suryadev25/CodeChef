#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
// cout<<t<<endl;
while(t--){
    int n;
    cin>>n;
int A[n],ans=0;
for(int i=0 ;i<n;i++){
    cin>>A[i];
    ans +=A[i];
    }
    // for(int i=0;i<n;i++){
    // if(ans%2==0)    /* If you'll uncomment the lines (16-20) and comment out line (21)  then also code will work*/
    //     ans=1;                  
    // }
    // if(ans==1){
    if(ans%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
return 0;
}