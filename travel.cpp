#include <iostream>
#include <string>
using namespace std;

int main() {
int t,n,a,b;
cin>>t;
while(t--){
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0 ; i<n ; i++){
    if(s[i]=='0')
    ans = ans+a;
  else
    ans = ans+b;
    }
cout<<ans<<endl;
}
	return 0;
}
