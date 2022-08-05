#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (x >= y)
        {
            cout << "PIZZA" << endl;
        }
        if (x < y && x >= z)
        {
            cout << "BURGER" << endl;
        }
        if (x < y && x < z)
        {
            cout << "NOTHING" << endl;
        }
    }

    return 0;
}