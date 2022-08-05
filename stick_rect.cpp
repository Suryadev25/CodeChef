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
        int n;
        cin >> n;
        vector<int> vec(101);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec[x]++;
        }
        int count = n;
        for (int i = 0; i < 101; i++)
        {
            if (vec[i] % 2 == 1)
            {
                count++;
            }
        }
        if ((count / 2) % 2 == 1)
        {

            count += 2;
        }

        cout << count - n << endl;
    }
    return 0;
}