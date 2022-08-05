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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll count = 0;

        sort(s.begin(), s.end());
        reverse(s.begin(), s.begin() + n / 2);
        string t = s;
        reverse(t.begin(), t.end());
        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[i])
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;
            cout << s << endl;
        }
    }
    return 0;
}