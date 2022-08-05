#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // 	cout<<t;
    while (t--)
    {
        int n, a = 1, b = 1, c = 1;
        cin >> n;
        // cout<<n<<endl;
        string s;
        cin >> s;
        // cout<<s[i]<<endl;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'I')
                a++;
            if (s[j] == 'Y')
                b++;
            if (s[j] == 'N')
                c++;
        }
        if (a >= 2)
            cout << "INDIAN" << endl;

        //else if(c>=2&&b==1)
        //  cout<<"NOT SURE"<<endl;

        else if (b >= 2)
            cout << "NOT INDIAN" << endl;
        else
            cout << "NOT SURE" << endl;
    }
    return 0;
}
