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
        ll count = 0;
        for (int i = 1; i <= n; i += 2)
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}