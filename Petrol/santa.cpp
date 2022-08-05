#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int socks[x];

    int ans = 0;
    int avg = 0, sum = 0, count[x], j = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> socks[i];
        sum += socks[i];
    }
    avg = sum / x;
    if ((sum % x) == 0)
    {
        for (int i = 0; i < x; i++)
        {

            if (socks[i] < avg)
            {
                // for(i =1; i <= (avg - socks[i]); i++){count++;}
                // while (j <= (avg - socks[i]))
                // {
                //     count++;
                //     j++;
                // }
                count[i] = avg - socks[i];

                ans += count[i];
            }
            else if (socks[i] >= avg)
            {
                count[i] = 0;
                // ans = ans + 0;
            }
        }
        cout << ans << endl;
        // for (int i = 0; i < x; i++)
        // {

        // }
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}