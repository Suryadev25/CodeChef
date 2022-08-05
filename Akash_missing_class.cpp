#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = n - 6;
        if (n < 6)
            cout << "0" << endl;
        else
            cout << ans / 7 + 1 << endl;
    }

    return 0;
}