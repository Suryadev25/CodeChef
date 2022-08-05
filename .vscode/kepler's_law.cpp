#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        float a, b;
        // if ((t1 * t1) / (r1 * r1 * r1) == (t2 * t2) / (r2 * r2 * r2))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        a = pow(t1, 2) / pow(r1, 3);
        b = pow(t2, 2) / pow(r2, 3);
        if (a == b)
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