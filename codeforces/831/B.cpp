#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    string s1,s2,s3,ans="";
    cin>>s1>>s2>>s3;
    unordered_map<char,char> mp;
    for(int i=0;i<s1.size();i++)
    {
        mp[tolower(s1[i])]=tolower(s2[i]);
        mp[toupper(s1[i])]=toupper(s2[i]);
    }
    for(auto i:s3)
    {
        if(mp.find(i)!=mp.end())
        {
            ans+=mp[i];
        }
        else
        {
            ans+=i;
        }
    }
    cout<<ans;
}