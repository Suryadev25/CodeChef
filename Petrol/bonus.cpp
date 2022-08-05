// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         arr[i] == 10000;
//         if (arr[i + 1] > arr[i])
//         {
//             arr[i + 1] += 10000;
//             sum += arr[i];
//         }
//         else if (arr[n - 2] - arr[n - 1] >= 20)
//         {

//             arr[n - 1] = arr[n - 2] - 20000;
//         }
//     }
//     cout << sum << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     int n;
//     cout << "n" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         arr[0] = 10000;
//         if (arr[i + 1] > arr[i])
//         {

//             sum += 10000;
//         }
//         else if ((arr[n - 2] - arr[n - 1]) >= 20)
//         {

//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int app[n];
    int ans = 0;
    app[0] = 10000;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            app[i] = app[i - 1] + 10000;
        }
        else if (arr[i] <= arr[i - 1])
        {
            app[i] = 10000;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans += app[i];
    }
    if (arr[n - 2] - arr[n-1] >= 20)
    {

        cout << ans + 10000 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}