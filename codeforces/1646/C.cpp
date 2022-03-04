#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> vex;
int pre()
{
    int initial = 1;
    for (int i = 1; i <= 16; i++)
    {
        initial = initial * i;
        vex.push_back(initial);
    }
    return 0;
}
int solve(int n)
{
    int res = n;
    int p = pow(2, 15);
    for (int i = 0; i <= p; i++)
    {
        int initial = 0, resp = 0;
        for (int j = 0; j <= 19; j++)
        {
            int pro = pow(2, j);
            if (pro & i)
            {
                initial++;
                resp += vex[j];
            }
        }
        int ans = 0;
        int ro = n - resp;
        while (ro)
        {
            if (ro % 2 == 1) ans++;
            ro /= 2;
        }
        if (resp + 1 < n + 2) if (res > initial + ans) res = initial + ans;
    }
    cout << res<<endl;
    return 0;
}
signed main()
{
    int t;
    cin >> t;
    for (auto i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pre();
        solve(n);
    }
}