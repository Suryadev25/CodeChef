#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float salary;
        cin >> salary;
        // float HRA_1;
        // HRA_1 = (salary / 100) * 10;
        // float DA_1;
        // DA_1 = (salary / 100) * 90;
        // long double DA_2;
        // DA_2 = (salary / 100) * 98;
        // int HRA_2 = 500;

        if (salary < 1500)
        {
            // salary = salary + HRA_1 + DA_1;
            salary = salary + (salary / 100) * 10 + (salary / 100) * 90;
        }
        else
        {
            // salary = salary + HRA_2 + DA_2;
            salary = salary + 500 + (salary / 100) * 98;
        }
        cout << fixed << setprecision(2) << salary << endl;
    }
    return 0;
}