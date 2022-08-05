#include <iostream>
using namespace std;


int main() {
int t;
cin>>t;
while(t--){
    int n,sum=0,i;
    cin>>n;
    // cout<<n<<" ";
    for(i=1 ; i<=n ; i++){
        // cout<<i<<endl;
        sum +=i;
    if(sum <=n &&(sum+i+1)>n)
    // if((sum+i+1)>n)
    // if(sum <=n)
    // if(sum >=n)
        break;
    }
    cout<<i<<endl;
    // cout<<sum<<endl;
    // cout<<i<<endl;
        // cout<<sum+i<<endl;
}
	return 0;
}
