#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nxt "\n"
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

signed main()
{
    fast 
    int k;
    cin>>k;
    string s;
    cin>>s;
    int chk[26]={0};
    for(int i=0;i<s.size();i++){
        chk[s[i]-'a']++;
    }
    string ans="";
    for(int i=0;i<26;i++){
        if(chk[i]%k!=0){
            cout<<-1<<nxt;
            return 0;
        }
        else{
            int total_occurrences = (chk[i] / k);
            for(int j=0;j<total_occurrences;j++){
                ans+=char(i+'a');
            }
        }
    }
    string p=ans;
    k--;
    while(k--){
        ans+=p;
    }
    cout<<ans<<nxt;

}