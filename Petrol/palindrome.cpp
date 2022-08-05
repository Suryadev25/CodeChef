// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // int t;
//     // cin >> t;
//     // while (t--)
//     // {
//     //     int n;
//     //     cin >> n;0
//     //     int arr[n];
//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         cin >> arr[i];

//     //     }
//     // }
//     string s;
//     string temp;
//     cout << "Enter a string" << endl;
//     cin >> s;
//     int n = s.length();
//     temp = s;
//     for (int i = 0; i < sqrt(n); i++)
//     {
//         swap(s[i], s[n - i - 1]);
//     }
//     // cout << s << endl;
//     // cout << temp << endl;
//     if (s == temp)
//     {
//         cout << "yes it is palindrome" << endl;
//     }
//     else
//     {
//         cout << "It is not a palindrome" << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 1)
            
                count++;
            
        }
        cout << count / 2 << endl;
    }
    return 0;
}