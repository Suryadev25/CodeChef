#include <iostream>
using namespace std;

int main() {
int t , xa , xb , XA , XB , x,y ;
cin>>t;
for(int i = 0 ; i<t ; i++){
    cin>>xa>>xb>>XA>>XB;
    x = ((XA/xa) + (XB/xb));
    cout<<x<<endl;
}

	return 0;
}
