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
        int a1, b1, c1, a2, b2, c2;
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
        int ans1 = 0, ans2 = 0;
        ans1 = a1 + b1 + c1;
        ans2 = a2 + b2 + c2;

        if (ans1 > ans2)
        {
            cout << "Dragon" << endl;
        }
        else if (ans1 < ans2)
        {
            cout << "Sloth" << endl;
        }
        else if (ans1 == ans2)
        {
            if (a1 > a2)
            {
                cout << "Dragon" << endl;
            }
            if (a1 < a2)
            {
                cout << "Sloth" << endl;
            }
            if (a1 == a2)
            {
                if (b1 > b2)
                {
                    cout << "Dragon" << endl;
                }
                if (b1 < b2)
                {
                    cout << "Sloth" << endl;
                }
                if (b1 == b2)
                {
                    cout << "Tie" << endl;
                }
            }
        }
    }
    return 0;
}