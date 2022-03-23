#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define test \
	int t;   \
	cin >> t;
#define pb push_back
#define B begin()
#define E end()
#define nxt "\n"
// #define k 1000000000

signed main()
{
	fast;
	test;
	while(t--){
		int f[126]={0};
		string s;
		cin>>s;
		for(auto i:s){
			f[i-'0']++;
		}
		int idx;
		for(int i=0;i<s.size();i++){
			if(f[s[i]-'0']==1){
				idx=i;
				break;
			}
			else f[s[i]-'0']--;
		}
		cout<<s.substr(idx,s.size()-idx+1)<<nxt;
	}


}