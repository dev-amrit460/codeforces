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

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second > b.second;
	return a.first < b.first;
}

signed main()
{
fast
int n,k,f=0;
cin>>n>>k;
vector<pair<int,int>> v;
for(int i=0;i<k;i++)
{
	int a,b;
	cin>>a>>b;
	v.pb({a,b});
}
sort(v.B,v.E,comp);
int power=n;
for(auto i:v)
{
	if(power<=i.first){f=1;
		break;}
	// power-=i.first;
	power+=i.second;
}
if(f)
	cout<<"NO"<<nxt;
else
	cout<<"YES"<<nxt;

}
