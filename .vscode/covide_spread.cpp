// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while (t--)
// //     {

// //         int n, d;
// //         cin >> n >> d;
// //         int ans = 1;
// //         if(d<=10){

// //         for (int i = 0; i < d; i++)
// //         {
// //             ans *= 2;
// //         }
// //         }
// //         if(d>10){

// //         for (int i = 0; i < 10; i++)
// //         {
// //             ans *= 2;
// //         }
// //         for (int i = 10; i < d; i++)
// //         {
// //             ans *= 3;
// //         }
// //         }

// //         if (ans <= n)
// //         {

// //             cout << ans << endl;
// //         }
// //         else
// //         {
// //             cout << n << endl;
// //         }
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, d;
//         cin >> n >> d;
//         ll ans = 1;
//         if (d <= 10)
//         {
//             ans = pow(2, n);
//         }
//         if (d = 11)
//         {
//             ans = ans * 3;
//         }
//         if (ans <= n)
//         {
//             cout << ans << endl;
//         }
//         else
//         {
//             cout << n << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        ll ans=1;
        for(int i=1 ;i<=d;i++ )
        if (i <= 10)
        {
            // ans = pow(2, d);
            ans*=2;
          if(ans>n){
              ans=n;
              break;
          }
        }
        else{
            // ans = pow(2,10);
            // ans = ans*pow(3,d-10);
            ans*=3;
            if(ans>n){
                ans=n;
                break;
            }
        }
        
       cout<<ans<<endl;
    }
    return 0;
}