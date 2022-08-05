#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() < 5)
        {
            cout << s << endl;
        }
        else
        {
            for (int i = 0; i < s.length() -5+1; i++)
            {
                if (s.substr(i, 5) == "party")

                    s.replace(i, 5, "pawri");
            }
            cout << s << endl;
        }
    }
    return 0;
}