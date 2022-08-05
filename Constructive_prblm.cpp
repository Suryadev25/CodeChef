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
        ll x;
        cin >> x;
        if (x == 1)
        {
            cout << "1 3 5" << endl;
        }
        else if (x % 2 == 0)
        {
            cout << x << " " << x + 1 << " " << x + 2 << endl;
        }
        else
        {
            cout << x - 2 << " " << x - 1 << " " << x << endl;
        }
    }

    return 0;
}