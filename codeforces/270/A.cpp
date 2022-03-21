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
test
while (t--)
{
int k;
cin >> k;
// k=[180(n) – 360] / n
// 360=(180-k)n
// 360/(180-k)=n
if(360%(180-k)==0) cout<<"YES"<<nxt;
else cout<<"NO"<<nxt;
}
}
