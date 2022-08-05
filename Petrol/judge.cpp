// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     // cout << "n" << endl;
//     cin >> n;
//     int count = 0, ans = 0;
//     int arr[n];
//     // cout << "arr[ n ]" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sort(arr, arr + n);

//         if (arr[i] = arr[i + 1])
//         {
//             count++;
//         }
//     }
//     if (count > n / 4)
//     {
//         ans++;
//     }
//     cout << ans << endl;

//     // for (int i = 0; i < n; i++)
//     // {

//     //     cout << arr[i] << endl;
//     // }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, c, out, j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i = j)
    {
        num = arr[i];
        c = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] != num)
                break;
            else
                c++;
        }
        if (c > n / 4)
        {
            out++;
        }
    }
    cout << out << endl;

    return 0;
}