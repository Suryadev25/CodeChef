#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 != 0)
        {
            n -= 1;
        }
        for (int i = 0; i < n; i += 2)
        {
            swap(s[i], s[i + 1]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            s[i] = 'z' + 'a' - s[i]; // We can put any two opp characters , like n , m and y , b (etc)
            cout << s << endl;
        }
        }
    return 0;
}