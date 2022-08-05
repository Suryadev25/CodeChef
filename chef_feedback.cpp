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
        string s;
        cin >> s;
        string s1 = "010";
        string s2 = "101";
        if (s.find(s2) != string::npos)
        {
            cout << "Good" << endl;
        }
        else if (s.find(s1) != string::npos)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}