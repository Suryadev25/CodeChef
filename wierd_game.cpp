#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = (a * (b - 1) + b * (a - 1));
        cout << ans << endl;
    }
    return 0;
}