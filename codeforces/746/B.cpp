#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int k;cin>>k;
    string s; cin >> s;
    string ans="";
    if(k%2==1){
        for(int i=0;i<k;i++){
            if(i%2==0){
                ans.push_back(s[i]);
            }
            else{
                ans.insert(0,1,s[i]);
            }
        }
    }
    else{
        for(int i=0;i<k;i++){
            if(i%2==1){
                ans.push_back(s[i]);
            }
            else{
                ans.insert(0,1,s[i]);
            }
        }
    }
    cout<<ans;
}