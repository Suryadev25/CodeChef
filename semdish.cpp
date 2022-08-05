#include <iostream>
#include<string>
#define same(x,a,b) for(auto x = a ; x<b ;x++)
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  string s1[4];
	  string s2[4];
   // 	  for(auto i=0 ; i<4 ; i++){
         same(i,0,4){
	      cin>>s1[i];
        	  }
   // 	  for(auto j=0 ; j<4 ; j++){
          same(j,0,4){
	      cin>>s2[j];
	       }
	          int ans=0;
         same(i,0,4){
	      same(j,0,4){
	          if(s1[i]==s2[j]){
	              ans++;
          }
      }
  }
	          if(ans >= 2){
	              cout<<"similar"<<endl;
	          }
	          else{
	              cout<<"dissimilar"<<endl;
	  }
	  
	}
	
	
	return 0;
}
