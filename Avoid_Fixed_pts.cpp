// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     ll t;
//     cin >> t;
//     ll index = 0;
//     ll count = 0;
//     ll pointer = 0;
//     ll flag = 0;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll a[n];
//         for (ll i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         for (ll i = 1; i <= n; i++)
//         {
//             if (a[i] == i)
//             {
//                 count++;
//                 index = i;
//                 pointer = 1;
//                 break;
//             }
//         }

//         for (ll i = index; i <= n; i++)
//         {
//             if ((pointer == 1) && (a[i] == a[i + 1] - 2))
//             {
//                 count++;
//             }
//             if ((pointer == 1) && (a[i] == a[i + 2] - 3) && (a[i + 2] % 2 == 0) && (a[n] - a[n - 1] != 2))
//             {
//                 flag = 1;
//             }
//         }
//         if (flag == 1)
//         {

//             cout << count + 1 << endl;
//         }
//         else
//         {
//             cout << count << endl;
//         }
//         count = 0;
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
        int count = 0;
        int item = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == i)
            {
                count++;
                item = i;
                break;
            }
        }
        for (int i = item; i <= n; i++)
        {
            if ((a[i] - a[i - 1] >= 2) && (a[i] - i == count))
            {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}