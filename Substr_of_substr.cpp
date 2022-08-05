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
        string s;
        cin >> s;
        ll n = s.length();
        ll count = 0;
        ll temp = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[0] && s[i] != s[n - 1])
            {
                count++;
            }
            if (count > temp)
            {
                temp = count;
            }
            if (s[i] == s[0] || s[i] == s[n - 1])
            {
                count = 0;
            }
        }
        if (temp == 0)
        {
            cout << "-1" << endl;
        }
        else
        {

            cout << temp << endl;
        }
    }
    return 0;
}