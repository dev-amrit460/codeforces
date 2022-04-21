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
        long long n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (long long i = n - 1; i >= 0; i--)
        {
            for (long long j = 0; j < m; j++)
            {
                if (a[i][j] == '*')
                {
                    long long f = i + 1;
                    while (f < n and a[f][j] == '.')
                    {
                        f++;
                    }
                    if (f - i > 1)
                    {
                        for (long long s = i; s < f - 1; s++) a[s][j] = '.';
                        
                        a[f - 1][j] = '*';
                    }
                }
            }
        }
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++) cout << a[i][j];
            cout << nxt;
        }
        cout<<nxt;
    }
}
