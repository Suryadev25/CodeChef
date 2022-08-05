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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string t = s;
        ll count = 0;
        reverse(t.begin(), t.end());
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                count++;
            }
        }
        // cout << count << endl;
        if (n % 2 != 0 && k >= (count / 2))
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0 && k >= (count / 2) && ((count / 2) - k) % 2 == 0)
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