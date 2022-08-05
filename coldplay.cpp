#include <iostream>
using namespace std;

int main()
{
    int t, a, b, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        //  cout<<a<<" "<<b<<endl;
        n = a / b;
        cout << n << endl;
    }
    return 0;
}
