#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] > k)
            {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
