#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1 ;i < n; i++)
    {
        // sum = n*(n - 1) / 2;
        // sum += ((n-1) - i);
        sum += (n - i);
    }
    cout << sum << endl;
    return 0;
}