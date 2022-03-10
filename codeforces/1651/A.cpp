#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define test int t; cin >> t; 
#define pb push_back
#define B begin()
#define E end()
#define nxt "\n"

signed main()
{
	fast;
	test;
	while(t--){
		int n;
		cin >> n;
		cout<<(1<<n)-1<<nxt;
	}
    return 0;
}


