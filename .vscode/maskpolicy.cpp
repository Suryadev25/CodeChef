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
        ll n, a;
        cin >> n >> a;
        ll ans = n - a;
        cout << min(ans, a) << endl;
    }
    return 0;
}