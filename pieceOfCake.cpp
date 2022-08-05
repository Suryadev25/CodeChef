// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int a=0,b=0;
	    cin>>s;
	    for(int i=0 ; i<s.length();i++){
	        for(int j=0;j<s.length();j++){
	            if(s[j]==s[i]){
	                a++;
	            }
	        }
	    if(a>b){
	        b=a;
	    }
	    a=0;
	    }
	    if(b==s.size()/2 && s.size()%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	   
	}
	return 0;
}
