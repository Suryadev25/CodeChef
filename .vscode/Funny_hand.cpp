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
        int n, a, b;
        cin >> n >> a >> b;
        if ((abs(a - b) > 2) || (a == b))
        {
            cout << "0" << endl;
        }
        else if (abs(a - b) == 2)
        {
            cout << "1" << endl;
        }
        else if (abs(a - b) == 1 && (a == 1 || b == 1))
        {
            cout << "1" << endl;
        }
        else if (abs(a - b) == 1 && (a == n) || (b == n))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}