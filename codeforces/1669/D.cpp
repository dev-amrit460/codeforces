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
        long long n;
        cin >> n;
        bool f = true;
        string str;
        cin >> str;
        for (int x = 0; x <= n - 1; x++)
        {
            if (str[x] == 'W')
                continue;
            else
            {
                int y = x;
                int col_r = 0;
                int col_b = 0;
                while (y <= n-1 and str[y] != 'W')
                {
                    if (str[y] == 'R')
                        col_r += 1;
                    else if (str[y] == 'B')
                        col_b += 1;

                    y += 1;
                }

                if (col_r == 0 or col_b == 0)
                    f = false;
                x = y - 1;
            }
        }

        if (!f)
            cout << "NO" << nxt;
        else
            cout << "YES" << nxt;
    }
    return 0;
}
