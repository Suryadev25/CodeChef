#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        a = n % 10;
        // cout<<a<<endl;
        while (n > 9)
        {
            n = n / 10;
        }

        cout << a + n << endl;
    }
    return 0;
}
