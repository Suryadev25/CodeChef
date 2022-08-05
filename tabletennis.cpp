#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int p,q,k,a;
	   cin>>p>>q>>k; 
	   a = (p+q)/k;
	   if(a%2==0){
	   
	       cout<<"CHEF"<<endl;
	   }
	   else{
	       cout<<"COOK"<<endl;
	   }
	  
	
	}
	return 0;
}
