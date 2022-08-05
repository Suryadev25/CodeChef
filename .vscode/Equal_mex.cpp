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
        vector<int> vec(2 * n);
        map<int, int> mp;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }
        bool count = true;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                break;
            }
            else if (mp[i] == 1)
            {
                count = false;
            }
        }
        cout << (count ? "YES\n" : "NO\n");
    }
    return 0;
}