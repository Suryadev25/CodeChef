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
        ll ans = x * y;
        ll ans1 = x * z;
        cout << ans1 - ans << endl;
    }
    return 0;
}