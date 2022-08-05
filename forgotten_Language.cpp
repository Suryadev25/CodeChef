#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> m;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a, i, j;
        cin >> n >> k;
        // cout << n << " " << k;
        string s[n];
        for (i = 0; i < n; i++)
        {
            cin >> s[i];
            // cout << s[i] << " ";
        }
        cout << endl;

        while (k--)
        {
            cin >> a;
            // cout << a << " ";
            string ss;
            for (j = 0; j < a; j++)
            {
                cin >> ss;
                m[ss]++;
                // cout << ss[j] << " ";
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (m.find(s[i]) != m.end())
            {
                cout << "YES"
                     << " ";
            }
            else
            {
                cout << "NO"
                     << " ";
            }
        }
        cout << endl;
        m.clear();
    }
    return 0;
}