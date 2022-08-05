
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         int x, y;
//         cin >> x >> y;
//         if(x==0){
//             y>1;
//         }
//         if (x % 2 != 0 )

//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y;
//         cin >> x >> y;
//         if ((x == 0) && y % 2 == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else if (x % 2 == 0)
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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((x > 0) && ((x + 2 * y) % 2 == 0))
        {
            cout << "YES" << endl;
        }
        // else if (x == 0 && (y) % 2 == 0)
        else if ((x + 2 * y) % 4 == 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}