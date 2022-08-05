#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, ans = 0;
        cin >> N >> K;
        for (int i = 0; i < N; i++)
        {
            int a, b;
            cin >> a >> b;
            if (K >= a)
            {
                K = K - a;
            }
            else
            {
                ans += (a - K) * b;
                K = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}