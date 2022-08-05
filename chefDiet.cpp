#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    // cout<<n<<" "<<k<<endl;
    int A[n];
    int day = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
      cin >> A[i];
      // cout<<A[i]<<" ";
    }

    for (int i = 1; i <= n; i++)
    {
      ans += A[i];

      if (ans < k)
      {
        day = i;
        break;
      }
      else
      {
        ans -= k;
      }
    }
    if (day == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO " << day << endl;
    }
  }

  return 0;
}
