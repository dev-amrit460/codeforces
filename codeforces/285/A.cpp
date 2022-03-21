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
cin >> n>>k;
vector<int> v;
for(int i = 1; i <=n; i++){
v.push_back(i);
}
int s=0;
reverse(v.begin(),v.begin()+k+1);
for(int i = 0; i < n; i++) cout << v[i] << " ";
return 0;
}
