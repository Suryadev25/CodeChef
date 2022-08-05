#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    cout << "n:" << endl;
    int n;
    cin >> n;
    cout<<"str:"<<endl;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }
    cout << "The set of strings is" << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }

    return 0;
}