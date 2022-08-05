#include <bits/stdc++.h>
using namespace std;
int Consequetive(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int leftmost = s.find('1');
        int rightmost = s.find_last_of('1');
        int x = Consequetive(s);
        int y = rightmost - leftmost + 1;
        if (y == x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}