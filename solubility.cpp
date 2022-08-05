#include <iostream>
using namespace std;

int main() {
	int t,x,a,b;
	cin>>t;
// 	cout<<t<<endl;
	while(t--){
	    int sol;
	    cin>>x>>a>>b;
sol = (100-x);
sol = sol*b;
sol = sol+a;
sol=sol*10;
	cout<<sol<<endl;
}

	
	return 0;
}
