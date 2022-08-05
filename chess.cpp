#include <iostream>
using namespace std;


int main() {
	int t, n , a, b, x , y;
	cin>>t;
	for(int i = 0 ; i<t ; i++){
	    cin>>n;
	    x = 2*(180+n);
	    cin>>a>>b;
	    y = a+b;
	    
	cout<<x-y<<endl;
	}
    
    
	return 0;
}
