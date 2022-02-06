#include <bits/stdc++.h>
using namespace std;

void print(int i, int j, int k)
{
    cout << (j - 1) * k + i << ' ';
}

int main()
{
    long long row[100001], col[100001];
    long long t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long k, n;
        cin >> k >> n;
        bool flag = 1;
        row[0] = col[0] = 1;
        for (int i = 1; i < n; i++)
        {
            row[i] = row[i - 1] + k;
            col[i] = col[i - 1] + row[i];
            if (col[i] % (i + 1))
                flag = 0;
        }
        if (!flag)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 1; i <= k; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    print(i, j, k);
                }
                cout << endl;
            }
        }
    }
    return 0;
}