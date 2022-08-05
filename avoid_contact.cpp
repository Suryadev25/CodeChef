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
        ll x, y;
        cin >> x >> y;
        ll non_infected = y - x;
        if (x != y)
        {
            cout << (x * 2 + non_infected) << endl;
        }
        else
        {
            cout << (x * 2 - 1) << endl;
        }
    }

    return 0;
}