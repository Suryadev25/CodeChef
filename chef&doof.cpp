#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a=0;
	    cin>>n;
	    int arr[n] , are[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	       if(arr[i]%2==0){
	           a = 1;
	       break;
	    }   
    }	 
	    if(a==1){
	       cout<<"No"<<endl;
	   }
	   else{
	       cout<<"Yes"<<endl;
	   }
}
	return 0;
}
