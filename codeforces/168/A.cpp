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
int n,x,y;
cin>>n>>x>>y;
int ans=((n*y)/100)-x;
if(ans<0) cout<<0<<nxt;
else if((n*y)%100!=0)cout<<ans+1<<nxt;
else cout<<ans<<nxt;
}
