#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, i, j, count = 0;
    cin >> n >> m >> k;
    while (n--)
    {

        int sum = 0, b[k];

        for (j = 0; j < k + 1; j++)
        {

            cin >> b[j];
            sum += b[j];
        }
        int x;
        cin >> x;
        if (sum >= m && x <= 10)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
