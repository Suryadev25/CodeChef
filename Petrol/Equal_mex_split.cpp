// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         map<int, int> mp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             mp[a[i]]++;
//         }
//         int count = 0;

//         for (auto it : mp)
//         {
//             if (it.second > count)
//                 count = it.second;
//         }
//         cout << count << endl;
//     }
//     return 0;
// }
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int zeros = count(a, a + n, 0);
        int ans = max(zeros, abs(n - zeros));
        cout << ans << endl;
    }

    return 0;
}