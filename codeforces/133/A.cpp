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
string k;
cin>>k;
bool flag=false;
if(k.find("H")!=string::npos or k.find("Q")!=string::npos or k.find("9")!=string::npos)
{
	flag=true;
}
if(flag)
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}
}
