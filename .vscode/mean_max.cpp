#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        double arr[n];
        double sum1 = 0;
        double sum2 = 0;
        double ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());

        for (int i = 1; i < n; i++)
        {
            sum1 += arr[i];
        }

        for (int i = 2; i < n; i++)
        {
            sum2 += arr[i];
        }
        ans2 = (arr[0] + arr[1]) / 2;
        sum1 = sum1 / (n - 1);
        sum2 = sum2 / (n - 2);
        double x = sum1 + arr[0];
        double y = sum2 + ans2;
        cout << fixed << setprecision(6) << max(x, y) << endl;
    }

    return 0;
}