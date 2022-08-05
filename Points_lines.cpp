#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    ll count = 0;
    while (t--)
    {
        int n;
        cin >> n;
        int x[n];
        int y[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        sort(x, x + n);
        sort(y, y + n);
        for (int i = 0; i < n; i++)
        {
            if (x[i] != x[i + 1])
            {
                count++;
            }
            if (y[i] != y[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}