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
string s1,s2;
cin>>s1>>s2;
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
int ans=0;
for(int i=0;i<s1.size();i++)
{
	if(s1[i]<s2[i])
	{
		ans=-1;
		break;
	}
	else if(s1[i]>s2[i])
	{
		ans=1;
		break;
	}
}
cout<<ans;
}
