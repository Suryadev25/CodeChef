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
        ll n, k, x;
        cin >> n >> k >> x;
        ll ans = x;
        if (n >= x && k < x)
        {
            cout << "-1" << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                cout << x - 1 << " ";
                x--;
                if (x == 0)
                {
                    x = ans;
                }
            }
        }
    }
    return 0;
}