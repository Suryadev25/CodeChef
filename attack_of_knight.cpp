#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int maxiy = max(y1, y2);
        int maxix = max(x1, x2);
        int miniy = min(y1, y2);
        int minix = min(x1, x2);
        if ((x1 == x2) && (((maxiy - miniy) == 2) || ((maxiy - miniy) == 4)))
        {
            cout << "YES" << endl;
        }
        else if ((y1 == y2) && (((maxix - minix) == 2) || ((maxix - minix) == 4)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
