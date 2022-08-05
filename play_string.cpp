#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0, ans = 0;
        cin >> n;
        string s, r;
        cin >> s >> r;
        // cout << s << endl
        //      << r << endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count++;
            if (r[i] == '1')
                ans++;
        }
        if (count == ans)
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