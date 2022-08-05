#include <bits/stdc++.h>
using namespace std;

int main()
{
    string key, dec, s3;
    cin >> key >> dec;
    int a, b, j, i, k;
    a = key.length();
    b = dec.length();
    for (j = 0; j < b; j++)
    {

        for (i = 0; i < a; i++)
        {
            if (key[i] == dec[j])
            {
                s3[k] = dec[j];
                k++;
                
                key[i] = 0;
                break;
            }
        }
    }
    cout << k + 1 << endl;

    return 0;
}