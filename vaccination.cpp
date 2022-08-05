#include <iostream>
using namespace std;

int main() {
	int t,N,P,X,Y;
	cin>>t;
	while(t--){
	   cin>>N>>P>>X>>Y;
	   int arr[N]; 
	  for(int i=0;i<N;i++)
	cin>>arr[i];
	int ans=0;
for(int i = 0 ; i<P ; i++)
    if(arr[i]==0)
        ans += X;
    else
        ans += Y;
        cout<<ans<<endl;
}
	return 0;
}