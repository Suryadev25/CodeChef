#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        string s;
        ll arr[n];
        ll brr[n];
        ll countz = 0;
        ll counto = 0;
        ll countn = 0;
        ll countm = 0;
        ll ans = 0;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            // cin >> arr[i];

            // if (arr[i] == 1)
            if (s[i] == '1')
            {
                countz++;
            }
            if (s[i] == '0')
            {
                countn++;
            }
            if ((s[i] == s[i + 1]) && (s[i + 1] == '1'))
            {
                counto++;
            }
            brr[i] = counto;
            counto = 0;
            if ((s[i] == s[i + 1]) && (s[i + 1] == '0'))
            {
                countm += 1;
            }
            // cout << countn << endl;
            arr[i] = countm;
            countm = 0;
        }
        sort(arr, arr + n, greater<int>());
        sort(brr, brr + n, greater<int>());
        // cout<<arr[0]<<endl;
        ll hello = arr[0] + 1;
        ll bello = brr[0];
        if (brr[0] > 0)
        {

            bello = brr[0] + 1;
        }
        else
        {
            bello = brr[0];
        }
        // cout<<hello<<endl;
        // cout<<bello<<endl;
        // cout << countm << endl;
        ans = ((n + 1) - countz);
        // cout << ans << endl;
        if (n - x > countz)
        {
            cout << ans / x << endl;
        }
        else if (n - x == countz)
        {

            if ((bello == countz) && (countn != hello))
            {
                cout << "0" << endl;
            }
            else
            {
                cout << ans / x << endl;
            }
        }
        else if (n - x < countz)
        {
            cout << ans / x << endl;
        }
    }
    return 0;
}