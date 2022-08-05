#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int diff = 0;
        if (n < m)
        {
            diff = m - min(n+k , m);
        }
        else if (m < n)
        {
            diff = n - min(m+k , n);
        }

        cout << diff << endl;
    }
    return 0;
}
