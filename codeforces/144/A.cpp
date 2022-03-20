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
int t;
cin >> t;
vector<int> v(t);
for(int i=0;i<t;i++)
{
	cin >> v[i];
}
int mn=INT_MAX;
int mx=INT_MIN;
int mini{0},maxi{0};
for(int i=0;i<t;i++)
{
	if(v[i]<=mn)
	{
		mn=v[i];
		mini=i;
	}
	if(v[i]>mx)
	{
		mx=v[i];
		maxi=i;
	}
}
int ans=maxi+t-1-mini;
if(maxi>mini) cout<<ans-1<<nxt;
else cout<<ans<<nxt;
}
