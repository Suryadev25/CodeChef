
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    sort(s.begin(), s.end());
    char duplicate;
    for (int i = 0; i < s.length(); i++)
    {
        // if (s[i] != duplicate)
        // {
        //     cout << s[i];
        //     duplicate = s[i];
        // }
        // else

        // {
        //     duplicate = s[i];
        // }
        if(s[i] != s[i+1]){
            duplicate = s[i];
            cout<<s[i];
            
        }
        else{
            duplicate = s[i];

        }
    }
    return 0;
}