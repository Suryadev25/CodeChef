#include <iostream>
using namespace std;

int main() {
int t, x,m,d;
cin>>t;
while(t--){
    cin>>x>>m>>d;
    if(m*x <= (x+d)){
        cout<<m*x<<endl;
    }
    else{
        cout<<x+d<<endl;
    }
}
	return 0;
}
