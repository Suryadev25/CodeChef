// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a;
//     cin >> a;
//     bool flag = 0;
//     for (int i = 2; i <= sqrt(a); i++)
//     {
//         if (a % i == 0)
//         {
//             cout << "not-prime" << endl;
//              flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         cout << "prime" << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    while(n>0){

    a = a * 10 + n % 10;
    n = n / 10;
    }
    cout << a << endl;
    return 0;
}