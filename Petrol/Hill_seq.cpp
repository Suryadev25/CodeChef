#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
            if ((arr[i] > arr[i + 1]) || (arr[i] < arr[i + 1]))
            {
                cout << arr[i] << " ";
            }
            if(arr[i]==arr[i+1])
            {
                cout << "-1" << endl;
            }
            cout << endl;
        }
    }
    return 0;
}