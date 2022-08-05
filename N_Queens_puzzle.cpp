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
        double n;
        cin >> n;
        double power = pow(n * 0.143, n);
        cout << round(power) << endl;
    }
    return 0;
}