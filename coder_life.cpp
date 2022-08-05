#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[30], ans = 0, count = 0;
        for (int i = 0; i < 30; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 30; i++)
        {
            if (arr[i] == 1)
            {
                count += 1;
                if (count > 5)
                {
                    ans = 1;
                    break;
                }
            }
            else if (arr[i] == 0)
            {
                count = 0;
            }
        }
        if (ans == 1)
        {
            cout << "#coderlifematters" << endl;
        }
        else
        {
            cout << "#allcodersarefun" << endl;
        }
    }
    return 0;
}