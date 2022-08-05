#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num = 0, count = 0;
    cin >> n;
    int arr[n], app[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        num = 3 * arr[i] + 1;
        for (int j = 0; j < n; j++)
        {
            while (arr[j] == num)
            {
                count++;
                num = 3 * num + 1;
            }
        }
        app[i] = count;
    }
    sort(app, app + n);
    cout << app[n - 1] << endl;
    return 0;
}