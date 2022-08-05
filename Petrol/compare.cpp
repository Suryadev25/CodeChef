#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string a, b;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }
        // for (int i = 0; i < n; i++)
        // {

        //     cin >> b[i];
        // }
        
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == b[i]) || (a[i] == b[i] - 32) || (a[i] - 32 == b[i]))
            {
                count++;
            }
        }
        if (count == n)
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
