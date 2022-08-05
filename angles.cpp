#include <iostream>
using namespace std;

int main() {
int t,a,b,c,d;
cin>>t;
while(t--){
    cin>>a>>b>>c>>d;
    if((a+c == 180)&&(b+d==180)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
	return 0;
}