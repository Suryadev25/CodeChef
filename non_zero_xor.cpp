#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    ll ans = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "7" << endl;
        }
        else
        {
            cout << "1 ";

            for (ll i = 1; i < n; i++)
            {
                // cout<< ans*2;
                ans *= 2;
                cout << ans << " ";
            }
            cout << endl;
            ans = 1;
        }
    }
    return 0;
}