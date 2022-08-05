#include <iostream>
using namespace std;

int main() {
int a,b,c;
int t;
cin>>t;
while(t--){
    cin>>a>>b>>c;
    if((a+b == c) || (b+c==a)|| (c+a==b)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
	return 0;
}
