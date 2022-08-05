#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c;
        cin >> a >> b >> c;
        // cout<<a<<" "<<b<<" "<<c<<endl;
        char x, y;
        cin >> x >> y;
        if(x==a || y==a){
            cout<<a<<endl;
        }
        else if(x==b || y==b){
            cout<<b<<endl;
        }
        else if(x==c || y==c){
            cout<<c<<endl;
        }
        // cout<<x<<" "<<y<<" "<<endl;
    }
    return 0;
}