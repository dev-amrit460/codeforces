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
int n;cin>>n;
int k=n-10;
if(k==0) cout<<0;
else if(k==10) cout<<15;
else if(k>11 or k<0) cout<<0;
else cout<<4;
}
