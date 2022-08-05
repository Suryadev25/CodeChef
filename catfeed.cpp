#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,m,flag=1;
    cin>>n>>m;
    int arr[m];
    int arry[n]={0};
    for(int i=0;i<m;i++){
        cin>>arr[i];
        // cout<<arr[i];
    }
 
for(int j=0;j<m;j++){
    int ans= arry[arr[j]-1]++; /* This part i copied :( */
    for(int k=0;k<n;k++){
        if(arry[k]<ans){
            flag =0;
            break;
        }
    }
    
}
if(flag==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
	return 0;
}