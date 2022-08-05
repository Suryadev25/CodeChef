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
        ll n, x, y, count = 0;
        cin >> n >> x >> y;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            // cin >> a[i];
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((b[i] - a[i] == x) || (b[i] - a[i] == y))
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << count << endl;
    }
    return 0;
}