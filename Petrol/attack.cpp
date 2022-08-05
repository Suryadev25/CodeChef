#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        //   cout<<arr[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != '0')
        {
            // cout << '0' << endl;
            arr[i] = '0';
        }
        else if (arr[i] == '0')
        {
            arr[i] = arr[i - count];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}