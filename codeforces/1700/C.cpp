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

int factorial(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int factorial_mod(int n, int m)
{
    if (n >= m)
        return 0;

    int result = 1;
    for (int d = 2; d <= n && result != 0; ++d)
        result = (result * d) % m;

    return result;
}

bool arraySortedOrNot(vector<int> arr, int n)
{
    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)

        if (arr[i - 1] > arr[i])
            return false;

    return true;
}
bool Palindrome(string S)
{
    int n = S.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (S[i] != S[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int lcs(string text1, string text2)
{
    int m = text1.size(), n = text2.size();
    int dp[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i < n + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (text1[i - 1] == text2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}
signed int solve(int n, int m)
{
    int out = (m * (m + 1)) / 2, start = 2;
    while (start < n + 1)
    {
        int z = start * m;
        out += z;
        start++;
    }
    return out;
}

signed main()
{
    fast
        test
    {
        int n;
        int out = 0;
        cin >> n;

        vector<int> arr(n + 10, 0);
        vector<int> arr2(n + 10, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i] - arr[i - 1];
        }
        for (int i = 2; i < n + 1; i++)
        {
            if (arr2[i] > 0)
                out = out + arr2[i];
            else if (arr2[i] < 0)
                out = out - arr2[i], arr2[1] += arr2[i];
        }
        if (arr2[1] < 0)
            arr2[1] = -arr2[1];
        out = out + arr2[1];
        cout << out << nxt;
    }
}