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
#define k 1000000000

signed main()
{
	fast;
	test;
	int flag = 0;
	while (t--)
	{
		int n;
		cin >> n;
		flag = 1;
		for (int i = 1; i + 1 < n + 2; i++)
		{
			if (flag > k)
			{
				cout << "NO" << nxt;
				flag = -1;
				i = n + 1;
			}
			if (flag != -1) flag = flag * 3;
		}

		if (flag != -1)
		{
			flag = 1;
			cout << "YES" << nxt;
			for (int i = 1; i + 1 < n + 2; i++)
			{
				cout << flag << " ";
				flag *= 3;
			}
			cout << nxt;
		}
	}
	return 0;
}
