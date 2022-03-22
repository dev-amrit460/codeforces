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
string s,p;
cin>>s>>p;
reverse(p.B,p.E);
if(s==p) cout<<"YES";
else cout<<"NO";
return 0;
}
