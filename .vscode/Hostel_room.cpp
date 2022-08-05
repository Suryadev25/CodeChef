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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i];
        }
        partial_sum(a, a + n, a);
        sort(a, a + n);
        if (a[n - 1] < 0)
        {
            cout << x << endl;
        }
        else
        {

            cout << a[n - 1] + x << endl;
        }
    }
    return 0;
}