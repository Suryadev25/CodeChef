#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, k, n, count = 0;
    cin >> t >> k >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < k; j++)
        {
            if (abs(arr[i] - arr[i + j]) ==t)
            {
                count = 1;
                break;
            }
            else
            {
                count;
            }
        }
    }
    if (count == 1)
    {
        cout << "true" << endl;
    }
    else if (count == 0)
    {
        cout << "false" << endl;
    }

    return 0;
}