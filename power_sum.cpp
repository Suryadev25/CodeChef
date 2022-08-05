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
        int sum = 0, count = 0, mini = 0, pos = 0;
        int ans = 1, remainder = 0;
        vector<int> vec(n);
        for (auto it = vec.begin(); it != vec.end(); ++it)
        {
            cin >> *it;
            sum += *it;
        }
        // sort(vec.begin(), vec.end());
        mini = *min_element(vec.begin(), vec.end());
        pos = min_element(vec.begin(), vec.end()) - vec.begin();
        if (ceil(log2(sum)) == floor(log2(sum)))
        {
            cout << "0" << endl;
        }
        else
        {
            while (ans <= sum)
            {
                ans *= 2;
            }
            // cout << ans << endl;
            remainder = ans - sum;
            cout << "1" << endl;
            cout << "1 " << (remainder / mini) + 1 << endl;
            cout << pos + 1 << endl;
        }
    }
    return 0;
}