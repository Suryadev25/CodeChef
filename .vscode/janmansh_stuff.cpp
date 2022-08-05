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
//         int x;
//         cin >> x;
//         if (x + 3 <= 10)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
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
//         int x, y;
//         cin >> x >> y;
//         cout << (10 * x + 5 * y) << endl;
//     }
//     return 0;
// }
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
//         int x, y;
//         cin >> x >> y;
//         if ((x + y) % 2 == 0)
//         {
//             cout << "Janmansh" << endl;
//         }
//         else
//         {
//             cout << "Jay" << endl;
//         }
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
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        int ab = min(a, b);
        int bc = min(ab, c);
        int cd = max(a, b);
        int ef = max(cd, c);
        int sum = a + b + c;
        int mid = sum - ef - bc;
        int total = (x - 1) * bc + mid;
        cout << total << endl;
    }
    return 0;
}