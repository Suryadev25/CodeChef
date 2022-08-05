#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n , x , k;
	    cin>>n>>x>>k;
	  int count =0;
	    int diff=0;
	    int a[n] , b[n];
	    for(int i=0 ; i<n ;i++){
	        cin>>a[i];
	    }
	    for(int i=0 ; i<n ;i++){
	        cin>>b[i];
	    }
	    for(int i =0 ; i<n ;i++){
	        if(abs(a[i]-b[i]) <= k){
	            count++;
	        }
	    }
	    if(count >= x){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	   
	}
	return 0;
}
