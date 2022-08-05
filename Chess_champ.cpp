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
        ll carl = 0;
        ll chef = 0;
        ll x;
        cin >> x;
        string s;
        cin >> s;
        for (int i = 0; i < 14; i++)
        {
            if (s[i] == 'C')
            {
                carl += 2;
            }
            else if (s[i] == 'N')
            {
                chef += 2;
            }
            else if (s[i] == 'D')
            {
                carl += 1;
                chef += 1;
            }
        }

        if (carl > chef)
        {
            cout << 60 * x << endl;
        }
        else if (carl == chef)
        {
            cout << 55 * x << endl;
        }
        else
        {
            cout << 40 * x << endl;
        }
    }

    return 0;
}