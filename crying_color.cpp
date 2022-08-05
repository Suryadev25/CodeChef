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
//         int n;
//         cin >> n;
//         int a, b, c, d, e, f, g, h, i;
//         cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
//         int count = 0;
//         if (a ==n &&  e == n  &&  i == n)
//         {
//             cout << "0" << endl;
//         }
//         // if (a == n || e == n || i == n)
//         // {
//         //     cout << c << endl;
//         // }
//        else if ((a == n) && (d == n || e == n || f == n) && (g == n || h == n || i == n))
//         {
//             cout << n << endl;
//         }
//        else if ((a == n || b == n || c == n) && (e == n) && (g == n || h == n || i == n))
//         {
//             cout << n << endl;
//         }
//        else if ((a == n || b == n || c == n) && (d == n || e == n || f == n) && (i == n))
//         {
//             cout << n << endl;
//         }
//        else if ((a == n || b == n || c == n) && (d == n || e == n || f == n) && (g == n) || (h == n) || (i == n))
//         {
//             cout << 2 * n << endl;
//         }

//        else if (b == d && c == g && f == h)
//         {
//             cout << b + c + f << endl;
//         }
//         else if(b==d){
//             if(f==h){
//                 cout<<b+f+c<<endl;
//             }
//         else if(f<h){
//             cout<<b+c+h<<endl;
//         }
//         else if(f>h){
//             cout<<b+c+f<<endl;
//         }
//         }
//         else if (b > d)
//         {
//             count = d;
//             b = b - d;
//             if (b > f)
//             {
//                 count = count + (b + c);
//                 cout << count << endl;
//             }
//            else if (b < f)
//             {
//                 f = f - b;
//                 count += b;
//                 cout << count + (b + c + f) << endl;
//             }
//              else if (b == f)
//             {
//                 count = count + (b + g);
//                 cout << count << endl;
//             }
//         }
//        else if (b < d)
//         {
//             count = b;
//             d = d - b;
//             if (h >= f)
//             {

//                 count = count + (h + c);
//                 cout << count << endl;
//             }
//           else  if (h < f)
//             {
//                 f = f - h;
//                 count += h;
//                 cout << count + (h + c + f) << endl;
//             }
//         }
//     }

//     return 0;
// }
// ******************ANSWER****************
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
        int a, b, c, d, e, f, g, h, i;
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
        int ans1 = 0, ans2 = 0;
        ans1 = b + c + f;
        ans2 = d + g + h;
        cout << max(ans1, ans2) << endl;
    }

    return 0;
}