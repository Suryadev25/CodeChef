#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s.pop_back();
        // cout << ((count(s.begin(), s.end(), '1') > 0) ? ("YES\n") : ("NO\n"));
        cout << ((find(s.begin(), s.end(), '1') != s.end()) ? ("YES\n") : ("NO\n"));
    }
    return 0;
}