#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    double n,v1,v2;
    cin>>n>>v1>>v2;
    double t1 , t2;

t1 =(n*(sqrt(2)))/v1;
t2 =(n*2)/v2;
// cout<<t1<<endl;
// cout<<t2<<endl;
if(t1<t2){
    cout<<"Stairs"<<endl;
}
else{
    cout<<"Elevator"<<endl;
}
}
	return 0;
}
