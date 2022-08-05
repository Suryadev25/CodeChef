
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {

        ld n, x;
        cin >> n >> x;

        ll ans = ceil(x / 3);
        ll sub = (3 * ans) - x;
        ll not_attemp = n - ans - sub;
        if (n - ans < sub)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << ans << " " << sub << " " << not_attemp << endl;
        }
    }
    return 0;
}