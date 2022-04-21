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
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

bool isPowerOf2(int x)
{
    return x and (!(x & (x - 1)));
}

int main()
{
    fast
        test
    {
        long long n; cin >> n;
        long long arr[n], pre[n];
        vi suf(n);
        for (long long i = 0; i < n; i++) cin >> arr[i];
        pre[0] = arr[0]; suf[n - 1] = arr[n - 1];

        for (long long i = 1; i < n; i++) pre[i] = pre[i - 1] + arr[i];
        for (long long i = n - 2; i >= 0; i--) suf[i] = suf[i + 1] + arr[i];
        for (long long i = 0, j = n - 1; i < n / 2; i++, j--)
        {
            long long temp = suf[i];
            suf[i] = suf[j];
            suf[j] = temp;
        }
        long long out = 0;
        for (long long i = 0; i <= n - 1; i++)
        {
            long long A_eat = pre[i];
            long long A_cnt = (i + 1);
            if (binary_search(suf.B, suf.E, A_eat))
            {
                long long B_cnt = lower_bound(suf.B, suf.E, A_eat) - suf.B + 1;
                if (A_cnt + B_cnt < n + 1)
                {
                    if (A_cnt + B_cnt > out)
                        out = A_cnt + B_cnt;
                }
            }
        }
        cout << out << nxt;
    }
}
