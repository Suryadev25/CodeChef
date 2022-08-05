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
        string s;
        s = to_string(n);
        reverse(s.begin(), s.end());
        int c = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '9')
            {
                break;
            }
            c++;
        }
        if (c % 2 == 0)
        {

            cout << n + 1 << endl;
        }
        else
        {
            cout << n + 2 << endl;
        }
    }
    return 0;
}