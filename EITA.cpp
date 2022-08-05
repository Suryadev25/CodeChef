#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y,z,d,a,b;
    cin>>d>>x>>y>>z;
    a= x*7;
    // cout<<a<<endl;
    b= (y*d) + (z*(7-d));
    // cout<<b<<endl;
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
}
	return 0;
}
