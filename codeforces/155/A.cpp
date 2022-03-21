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
int k;
cin >> k;
vector<int> v(k);
int count = 0;
for(int i = 0; i < k; i++)
{
	cin >> v[i];
}
int mn=v[0];
int mx=v[0];
for(int i = 1; i < k; i++)
{
	if(v[i] < mn)
	{
		mn = v[i];
		count++;
	}
	if(v[i] > mx)
	{
		mx = v[i];
		count++;
	}
	
}
cout<<count;
}
