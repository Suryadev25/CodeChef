#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> mp)
{
    unordered_map<int, string>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}
int main()
{
    unordered_map<int, string> mp;
    mp[5] = "mno";
    mp[3] = "ghi";
    mp[9];
    mp[2] = "def";
    mp[1] = "abc";
    mp[7] = "stu";
    mp[6] = "pqr";
    mp[8] = "wxyz";
    mp[4] = "jkl";


    // auto it = mp.find(10);
    unordered_map<int, string>::iterator it;
    it = mp.find(10);
    if (it == mp.end())
    {
        cout << "NO value " << endl;
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }
    print(mp);
    return 0;
}