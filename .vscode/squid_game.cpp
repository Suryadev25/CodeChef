
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // set<int>s;
//     int t;
//     int sum = 0;
//     cin >> t;
//     while (t--)
//     {
//         int n, i;
//         cin >> n;
//         int A[n];
//         for (i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         sort(A, A + n);
//         for (i = 1; i < n; i++)
//         {
//             // sum =0;

//             // cout << A[i] <<" ";
//             sum += A[i];
//         }
//         cout << sum << endl;
//         sum = 0;
//         // cout<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        s.insert(n);
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << (*it);
        }
    }
    return 0;
}