#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int d;
    cin >> d;
    if (d % 2 != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "0 " << d / 2 << endl;
        cout << d / 2 << " 0" << endl;
        cout << "0 " << -d / 2 << endl;
        cout << -d / 2 << " 0" << endl;
    }
    return 0;
}