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
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cin>>t;
		if(t==1){
			cout<<abs(2-i)+abs(2-j);
			return 0;
		}
	}
}
}
