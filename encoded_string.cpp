// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         unordered_map<string , char> m = {{"0000" , 'a'} ,
//          {"0001",'b'},
//          {"0010",'c'},
//          {"0011",'d'},
//          {"0100",'e'},
//          {"0101",'f'},
//          {"0110",'g'},
//          {"0111",'h'},
//          {"1000",'i'},
//          {"1001",'j'},
//          {"1010",'k'},
//          {"1011",'l'},
//          {"1100",'m'},
//          {"1101",'n'},
//          {"1110",'o'},
//          {"1111",'p'},
//                        };
//                        for(int i=0 ; i<n ; i+=4){
//                         cout<<m[s.substr(i,4)];
//                        }
//     }
//     return 0;
// }
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
        string s;
        cin >> s;
        char arr[16] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
        int low = 0;
        int high = 15;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                high = (high + low) / 2;
            }
            else if (s[i] == '1')
            {
                low = (high + low) / 2 + 1;
            }
            if (low == high)
            {
                ans = ans + arr[low];
                high = 15;
                low = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}