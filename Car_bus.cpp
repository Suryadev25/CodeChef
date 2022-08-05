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
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << "Car" << endl;
        }
        else if (x < y)
        {
            cout << "Bike" << endl;
        }
        else
        {
            cout << "Same" << endl;
        }
    }
    return 0;
}