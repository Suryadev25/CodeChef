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
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0, ans = 0, pref = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ans = sum;
        for (ll i = 0; i < n; i++)
        {
            pref += a[i];
            ll rem = sum - pref;
            ll time = max(rem, pref);
            ans = min(ans, time);
        }
        cout << ans << endl;
    }
    return 0;
}