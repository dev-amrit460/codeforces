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
int n,k;
cin>>n>>k;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
sort(a.begin(),a.end());
int ans=0;
for(int i=0;i<k;i++)
{
		ans+=a[i]<=0?-a[i]:0;
}
cout<<ans;
}
