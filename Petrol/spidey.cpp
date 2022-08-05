#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    int x, y;
    x = s1.length();
    y = s2.length();
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    // cout << s1 << endl
    //      << s2 << endl;
    if (x == y)
    {

        if (s1 == s2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}