#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M, x, y;
        cin >> M >> x >> y;
        int arr[M], s, a, b, count = 0;
        s = x * y;
        for (int j = 0; j < M; j++)
        {
            cin >> arr[j];
        }
        for (int i = 0; i <= 100; i++)
        {

            bool safe = true;
            for (int j = 0; j < M; j++)
            {
                a = arr[j] + s;
                b = arr[j] - s;
                if (b < 1)
                {
                    b = 1;
                }
                if (a > 100)
                {
                    a = 100;
                }
                if (i >= b && i <= a)
                {
                    safe = false;
                }
            }
            if (safe)
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int M, x, y;
//         cin >> M >> x >> y;
//         int arr[M];
//         for (int i = 0; i < M; i++)
//         {
//             cin >> arr[i];
//         }
//         int dist = x * y;
//         int count = 0;
//         for (int i = 1; i <= 100; i++)
//         {
//             bool safe = true;
//             for (int j = 0; j < M; j++)
//             {
//                 int left = arr[j] - dist;
//                 int right = arr[j] + dist;
//                 if (i >= left && i <= right)
//                 {
//                     safe = false;
//                 }
//             }
//             if (safe)
//                 count += 1;
//         }
//         cout << count << endl;
//     }
//     return 0;
// }