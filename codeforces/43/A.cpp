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
fast
int n;
cin >> n;
unordered_map<string, int> m;
for (int i = 0; i < n; i++)
{
	string s;
	cin >> s;
	m[s]++;
}
string ans;
int mx=-1;
for(auto it = m.B; it != m.E; it++)
{
if(it->second > mx){
mx = it->second;
ans = it->first;
}
}
cout << ans << nxt;
}