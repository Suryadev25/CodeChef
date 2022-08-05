#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
while(t--){
int n;
cin>>n;
string direction = "North";
while(n--){
	    if(direction=="North")
	        direction="East";
	    
	    else if(direction=="East")
	      direction="South";
	    
	    else if(direction=="South")
	        direction="West";
	    
	    else if(direction=="West")
	       direction="North";
}
cout<<direction<<endl;
}
	
	return 0;
}
