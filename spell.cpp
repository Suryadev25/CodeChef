// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         if(((a+b) > (b+c) ) && ((a+b)>(c+a))){
//             cout<<a+b<<endl;
//         }
//         else if((b+c)>(a+b) && (b+c)>(c+a)){
//             cout<<b+c<<endl;
//         }
//         else{
//             cout<<c+a<<endl;
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
//         int a[3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a, a + 3);
//         cout << a[1] + a[3] << endl;
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
        int number;
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            cin >> number;
            v.push_back(number);
        }
        sort(v.begin(), v.end());
        cout << v[1] + v[2] << endl;
    }
    return 0;
}