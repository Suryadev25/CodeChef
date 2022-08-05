
// #include <bits/stdc++.h>
// using namespace std;
// #define max 1000000
// #define ll long long int
// ll a[max];

// void subString(string s, int n)
// {
//     for (int i = 0; i < n; i++)s
//         for (int len = 1; len <= n - i; len++)
//             cout << s.substr(i, len) << " ";
// }

// int main()
// {
//     string s;
//     cin >> s;
//     subString(s, s.length());
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    int xo = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        xo = xo ^ a[i];
    }
    cout << xo << endl;
    return 0;
}