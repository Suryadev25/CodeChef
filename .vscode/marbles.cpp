// *************My Approach************
// #include <bits/stdc++.h>
// using namespace std;

// int vowel(char ch)
// {
//     if (ch == 'a' || ch == 'e' || ch == 'i' ||
//         ch == 'o' || ch == 'u')
//         return 1;
//     return 0;
// }
// // int consonant(char cc)
// // {
// //     if (cc == 'a' || cc == 'e' || cc == 'i' ||
// //         cc == 'o' || cc == 'u')
// //         return 0;

// //     else if ((cc >= 'a' && cc <= 'z') || (cc >= 'A' && cc <= 'Z'))
// //         return 1;
// // }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, i, count = 0;
//         cin >> n;
//         string s1, s2;
//         cin >> s1 >> s2;
//         char sexy;
//         for (i = 0; i < n; i++)
//         {
//             if (s2[i] != '?')
//             {
//                 sexy = s2[i];
//             }
//             if (s1[i] == '?')
//             {

//                 s1[i] = s2[0];
//             }
//             if (s2[i] == '?')
//             {

//                 s2[i] = s2[0];
//             }
//             if (s1[i] == '?' && s2[i] == '?')
//             {
//                 s1[i] = s2[0];
//                 s2[i] = s2[0];
//             }
//             if (s1[i] == s2[i])
//             {
//                 continue;
//             }
//             if (vowel(s1[i]) && !vowel(s2[i]))
//             {
//                 count++;
//             }
//             if (!vowel(s1[i]) && vowel(s2[i]))
//             {
//                 count++;
//             }
//             if (vowel(s1[i]) && vowel(s2[i]))
//             {
//                 count = count + 2;
//             }
//             if (!vowel(s1[i]) && !vowel(s2[i]))
//             {
//                 count = count + 2;
//             }
//         }
//         // cout << count << endl;
//         // cout << s1 << endl;
//         // cout << s2 << endl;

//         cout << count << endl;

//     }
//     return 0;
// }

// using maps and similar to mine
// #include <bits/stdc++.h>
// using namespace std;

// bool vowelHaibhsdk(char a)
// {
//     if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
//     {
//         return true;
//     }
//     return false;
// }

// int lauda(string &s1,string &s2)
// {
//     int n=s1.length();
//     vector <pair<char,char>> ABC;
//     for(int i=0;i<n;i++)
//     {
//         if(s1[i]!=s2[i])
//         {
//             ABC.push_back({s1[i],s2[i]});
//         }
//     }

//     int m=ABC.size();

//     int meraans=INT_MAX;

//     for(int i=0;i<26;i++)
//     {
//         int ct=0;
//         char tt='a'+i;
//         int flag=0;
//         for(int j=0;j<m;j++)
//         {
//             pair<char,char> chut=ABC[j];
//             if(chut.first!='?' && chut.second!='?')
//             {
//                 if( ( vowelHaibhsdk(chut.first) && ! vowelHaibhsdk(chut.second) ) || (! vowelHaibhsdk(chut.first) &&  vowelHaibhsdk(chut.second)) ){
//                     ct++;}
//                     else{
//                         ct+=2;
//                     }
//             }
//             else if(chut.first=='?')
//             {
//                 if(chut.second!=tt)
//                 {
//                     if( ( vowelHaibhsdk(tt) && ! vowelHaibhsdk(chut.second) ) || (! vowelHaibhsdk(tt) &&  vowelHaibhsdk(chut.second)) ){
//                     ct++;}
//                     else{
//                         ct+=2;
//                     }
//                 }
//             }
//             else if(chut.second=='?')
//             {
//                 if(chut.first!=tt)
//                 {
//                     if( ( vowelHaibhsdk(tt) && ! vowelHaibhsdk(chut.first) ) || (! vowelHaibhsdk(tt) &&  vowelHaibhsdk(chut.first)) ){
//                     ct++;}
//                     else{
//                         ct+=2;
//                     }
//                 }
//             }
//         }

//             meraans=min(meraans,ct);

//     }
//     if(meraans==INT_MAX)
//     {
//         return 0;
//     }
//     return meraans;
// }

// int main()

// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         string s1,s2;
//         cin>>s1;
//         cin>>s2;
//         cout<<lauda(s1,s2)<<endl;
//     }
//     return 0;
// }

// Ankur's Code
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// bool vowel(char ch)
// {
//     return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u');
// }

// int main()
// {
//     //ios_base::sync_with_stdio(false);
//     //cin.tie(0);
//     ll t;
//     cin>>t;
//     while (t--)
//     {
//         ll n;
//         cin>>n;
//         string s,r;
//         cin>>s>>r;
//         ll a[26]= {0};
//         //bool vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//         string h="";
//         string h2="";
//         ll ans=0ll;
//         for(ll i=0; i<n; ++i)
//         {
//             char u=s[i];
//             char u2=r[i];
//             if(u!='?'&&u2!='?')
//             {
//                 if(u==u2)
//                     continue;
//                 else
//                 {
//                     if(vowel(u)&&vowel(u2))
//                         ans+=2;
//                     else if((!vowel(u))&&(!(vowel(u2))))
//                         ans+=2;
//                     else
//                         ++ans;
//                 }
//             }
//             else
//             {
//                 if(u=='?'&&u2=='?')
//                     continue;
//                 h+=s[i];
//                 h2+=r[i];
//             }
//         }
//         if(h.length()==0)
//             cout<<ans<<"\n";
//         else
//         {
//             map<char,ll> m;
//             char hu='a';
//             for(ll i=0; i<26; ++i)
//             {
//                 ll ko=count(h.begin(),h.end(),hu);
//                 ll ko2=count(h2.begin(),h2.end(),hu);
//                 if(ko+ko2!=0)
//                 m.insert({hu,ko+ko2});
//                 hu+=1;
//             }
//             ll ma1=0ll;
//             char u1=' ';
//             ll ma2=0ll;
//             char u2=' ';
//             ll ma3=0ll;
//             ll ma4=0ll;
//             for(auto it=m.begin(); it!=m.end(); ++it)
//             {
//                 //cout<<it->first<<" "<<it->second<<"\n";
//                 //cout<<"bruh";
//                 if(vowel(it->first))
//                 {
//                     if(it->second>ma1)
//                     {
//                         u1=it->first;
//                         ma1=it->second;
//                     }
//                     ma3+=it->second;
//                 }
//                 else
//                 {
//                     if(it->second>ma2)
//                     {
//                         u2=it->first;
//                         ma2=it->second;
//                     }
//                     ma4+=it->second;
//                 }

//             }
//             ma3=ma3-ma1;
//             ma4=ma4-ma2;
//             ans+=min(ma3*2+ma4+ma2,ma4*2+ma3+ma1);
//             /*for(ll i=0; h.length(); ++i)
//             {
//                 if(h[i]==ma||h2[i]==ma)
//                     continue;
//                 else
//                 {
//                     if(vowel(h[i])&&vowel(h2[i]))
//                         ans+=2;
//                     else if((!vowel(h[i]))&&(!(vowel(h2[i]))))
//                         ans+=2;
//                     else
//                         ++ans;
//                 }
//             }*/
//             cout<<ans<<"\n";
//         }

//     }

//     return 0;
// }

// Short and clean code

#include <bits/stdc++.h>
using namespace std;

int vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        int count = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                char s1i = (s1[i] == '?' ? c : s1[i]);
                char s2i = (s2[i] == '?' ? c : s2[i]);
                if (s1i == s2i)
                    continue;
                sum += (vowel(s1i) != vowel(s2i) ? 1 : 2);
            }
            count = min(count, sum);
        }
        cout << count << endl;
    }
    return 0;
}