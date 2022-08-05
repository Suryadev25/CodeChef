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
        for (int i = 1; i <= n;i++)
        {
            if (i % 2 != 0)
            {

                cout << i << " ";
            }
            else
            {
                cout << 2 * (i - 1) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}