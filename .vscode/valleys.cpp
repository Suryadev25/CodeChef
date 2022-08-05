
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s;
        cin >> n >> m;
        if (n > m)
        {
            n = n - m;
            while (m != 0)
            {
                s += "01";
                m--;
            }
            while (n != 0)
            {
                s += "010";
                n--;
            }
            cout << s.length() << endl;
            cout << s << endl;
        }
        else if (m > n)
        {
            m = m - n;
            while (n != 0)
            {
                s += "10";
                n--;
            }
            while (m != 0)
            {
                s += "101";
                m--;
            }
            cout << s.length() << endl;
            cout << s << endl;
        }
        else if (m = n)
        {
            while (m != -1)
            {
                s += "01";
                m--;
            }
            cout << s.length() << endl;
            cout << s << endl;
        }
    }
    return 0;
}