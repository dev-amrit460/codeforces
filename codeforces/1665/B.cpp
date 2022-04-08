#include <bits/stdc++.h>
using namespace std;
#define test     \
    long long t; \
    cin >> t;    \
    while (t--)
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define pb push_back
#define B begin()
#define E end()
#define nxt "\n"

int main()
{
    fast
        test
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        unordered_map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        long long c = INT_MIN;
        long long l = INT_MIN;
        for (auto it : mp)
        {
            if (it.second <= l)
                continue;
            c = it.first, l = it.second;
        }
        long long need = n - l, ans = 0;
        while (need > 0)
        {
            ans++;
            if (l <= need-1)
            {
                need = need - l,ans = ans + l,l = l * 2;
            }
            else
            {
                ans = ans + need;
                break;
            }
        }
        cout << ans << nxt;
    }
}
