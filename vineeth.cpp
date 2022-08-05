#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int count = n - 1;
    while (count > 0)
    {
        cout << count << " ";
        count -= 2;
    }
    if (n % 2 == 0)
    {
        int ref = 2;
        while (ref <= n)
        {
            cout << ref << " ";
            ref += 2;
        }
    }
    else
    {
        int ref = 1;
        while (ref <= n)
        {
            cout << ref << " ";
            ref += 2;
        }
    }

    return 0;
}