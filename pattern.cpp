#include <bits/stdc++.h>
#define ll long long
using namespace std;

void pattern()
{
    int n;
    cin >> n;
    ll Matrix[n][n];
    vector<vector<ll>> order;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll Anti_diagonal = i + j;
            ll row = i;
            ll col = j;
            order.push_back({Anti_diagonal, row, col});
        }
    }
    sort(order.begin(), order.end());
    int j = 1;
    for (auto x : order)
    {
        ll row = x[0];
        ll col = x[1];
        Matrix[row][col] = j;
        j++;
    }
    for(ll i=0 ; i<n ; i++){
        for(ll j = 0 ; j<n;j++){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        pattern();
    }
}