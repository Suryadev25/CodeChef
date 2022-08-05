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
        ll a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        ll diff1 = p - a;
        ll diff2 = q - b;
        ll diff3 = r - c;
        ll maxdiff = max(diff1, max(diff2, diff3));
        if (maxdiff == diff1)
        {
            ll ans1 = p + b + c;
            if (ans1 > ((p + q + r) / 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (maxdiff == diff2)
        {
            ll ans2 = q + a + c;
            if (ans2 > ((p + q + r) / 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (maxdiff == diff3)
        {
            ll ans3 = r + a + b;
            if (ans3 > ((p + q + r) / 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}