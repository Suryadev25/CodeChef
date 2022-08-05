// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.pop();
//     st.push(3);
//     st.push(4);
//     while (!st.empty())
//     {
//         cout << st.top() << endl;
//         st.pop();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    q.push("mno");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}