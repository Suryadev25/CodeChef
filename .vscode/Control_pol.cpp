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
        double n, x, y;
        cin >> n >> x >> y;
        int bus = 0;
        bus = ceil(n / 100) * x;
        // cout << bus << endl;
        int car = 0;
        car = ceil(n / 4) * y;
        // cout << car << endl;
        int a;
        double b = int(n) % 100;
        double c = ceil(b / 4);
        // cout << c << endl;
        a = ((int(n) / 100) * int(x)) + (c * y);
        // cout << a << endl;
        cout << min(a, min(bus, car)) << endl;
    }
    return 0;
}