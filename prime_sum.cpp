#include <bits/stdc++.h>
using namespace std;

bool Is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
    return false;
        }
    }
            return true;
}

void prime()
{
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    for (int number = sum + 1;; number++)
    {
        if (Is_prime(number) == true)
        {
            cout << number - sum << endl;
        }
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        prime();
    }
    return 0;
}