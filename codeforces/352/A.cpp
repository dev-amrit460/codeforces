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
int n;
cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++) cin >> a[i];
int c5=0;
int c0=0;
for(int i=0;i<a.size();i++)
{
	if(a[i]==5)
	{
		c5++;
	}
	else
	{
		c0++;
	}

}
if(c0==0 or c5<9)
{
	if(c0>0)cout<<"0";
	else cout<<"-1";
	return 0;
}
else
{
	int k=9*(c5/9);
	string ans(k,'5');
	string ans1(c0,'0');
	cout<<ans+ans1;
	return 0;
}
	return 0;
}
