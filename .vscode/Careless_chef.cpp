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
        int a[2 * n];
        int count_e = 0;
        int count_o = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                count_e++;
            }
            else if (a[i] % 2 != 0)
            {
                count_o++;
            }
        }
        if (count_e % 2 == 0 && count_o % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}