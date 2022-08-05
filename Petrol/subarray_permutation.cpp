#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    ll count = 0;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << "1" << endl;
        }
        else if (k == 1 && n > 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 1; i < k; i++)
            {
                cout << i << " ";
            }

            for (int i = n; i >= k; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}