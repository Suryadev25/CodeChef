#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << b << endl;
        }
        else
        {
            cout << (a - (b - a)) << endl;
        }
    }
    return 0;
}