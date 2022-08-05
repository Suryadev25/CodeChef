#include <bits/stdc++.h>
#define ll long long int
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
        ll sum1 = 0;
        ll sum2 = 0;
        cin >> n;
        vector<ll> vec(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        vector<ll> v1, v2;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                v1.push_back(abs(vec[i]));
            }
            else
            {
                v2.push_back(abs(vec[i]));
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        if (v2[n / 2 - 1] > v1[0])
        {
            swap(v2[n / 2 - 1], v1[0]);
        }
        for (auto it : v1)
        {
            sum1 += it;
        }
        for (auto it : v2)
        {
            sum2 += it;
        }
        cout << sum1 - sum2 << endl;
    }
    return 0;
}