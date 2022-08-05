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
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        sort(arr, arr+n , greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (sum < x)
            {
                sum += arr[i];
                count++;
            }
        }
        if (sum >= x)
        {
            cout << count << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}