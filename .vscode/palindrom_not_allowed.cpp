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

        for (int i = 0; i < n - 2; i += 3)
        {
            cout << "abc";
        }
        if (n % 3 == 1)
        {
            cout << "a";
        }
        if (n % 3 == 2)
        {
            cout << "ab";
        }
        cout << endl;
    }

    return 0;
}