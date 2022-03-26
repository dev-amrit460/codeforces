#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define B begin()
#define E end()
#define nxt "\n"
// #define k 1000000000

signed main()
{
    fast
    test
    {
        int a, b;
        cin >> a >> b;
        vector<int> v;
        map<int, int> m;
        int f=1;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
            m[x]++;
        }
        
        for (int i = 0; i < a; i++)
        {
            if (m.find(v[i]-b) != m.end())
            {
                cout << "YES" << nxt;
                f=0;
                break;
            }
        }
        if(f) cout << "NO" << nxt;
    }
    return 0;
}
