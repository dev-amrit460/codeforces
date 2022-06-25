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
int mod = 1e9 + 7;
#define vll vector<int>
#define all(x) x.begin(), x.end()

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
bool isPowerOfFour(int n)
{
    return !(n & (n - 1)) && (n & 0x55555555);
    // check the 1-bit location;
}
int count_one(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

long largest_power(long N)
{
    // changing all right side bits to 1.
    N = N | (N >> 1);
    N = N | (N >> 2);
    N = N | (N >> 4);
    N = N | (N >> 8);
    N = N | (N >> 16);
    return (N + 1) >> 1;
}
int hammingWeight(uint32_t n)
{
    unsigned long mask = 1;
    int count = 0;
    for (int i = 0; i < 32; ++i)
    { // 31 will not do, delicate;
        if (mask & n)
            count++;
        mask <<= 1;
    }
    return count;
}
vector<string> findRepeatedDnaSequences(string s)
{
    int sLen = s.length();
    vector<string> v;
    if (sLen < 11)
        return v;
    char keyMap[1 << 21]{0};
    int hashKey = 0;
    for (int i = 0; i < 9; ++i)
        hashKey = (hashKey << 2) | (s[i] - 'A' + 1) % 5;
    for (int i = 9; i < sLen; ++i)
    {
        if (keyMap[hashKey = ((hashKey << 2) | (s[i] - 'A' + 1) % 5) & 0xfffff]++ == 1)
            v.push_back(s.substr(i - 9, 10));
    }
    return v;
}

int three_repeat(vector<int> &nums)
{
    int t = 0, a = 0, b = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        t = (a & ~b & ~nums[i]) | (~a & b & nums[i]);
        b = (~a & b & ~nums[i]) | (~a & ~b & nums[i]);
        a = t;
    }
    return a | b;
}
map<char, int> mp;

class cmp
{
public:
    bool operator()(pair<int, char> x, pair<int, char> y)
    {
        return x.first < y.first;
    }
};
signed main()
{

    test
    {
        int n, m;
        cin >> n >> m;
        vector<int> a;
        for (int i = 0; i < n; i+=1)
        {
            int p;
            cin >> p;
            a.push_back(p);
        }
        int d;
        cin >> d;
        vector<int> b;
        for (int i = 0; i < d; i+=1)
        {
            int s;
            cin >> s;
            b.push_back(s);
        }
        int temp1 = 0;
        int temp2 = 0;
        vector<pair<int, int>> arr, brr;
        for (int i = 0; i <= n - 1; i+=1)
        {

            temp1 = temp1 + a[i];
            int g = arr.size();
            if (i != 0 and arr[g - 1].first == a[i])
            {
                arr[g - 1].second += 1;
            }
            else if (a[i] % m == 0)
            {
                int dummy = 1, c;
                while (a[i] % m == 0)
                {
                    dummy = dummy * m;
                    c = a[i] / m;
                    a[i] = a[i] / m;
                }
                if (i != 0 and arr[g - 1].first == c)
                {
                    arr[g - 1].second += dummy;
                }
                else
                    arr.push_back({c, dummy});
            }
            else
                arr.push_back({a[i], 1});
        }
        for (int i = 0; i < d; i+=1)
        {
            temp2 = temp2 + b[i];
            int f = brr.size();
            if (i != 0 and brr[f - 1].first == b[i])
            {
                brr[f - 1].second+=1;
            }
            else if (b[i] % m == 0)
            {
                int dummy = 1, c;
                while (b[i] % m == 0)
                {
                    dummy = dummy * m;
                    c = b[i] / m;
                    b[i] /= m;
                }
                if (i != 0 and brr[f - 1].first == c)
                {
                    brr[f - 1].second += dummy;
                }
                else
                    brr.push_back({c, dummy});
            }
            else
                brr.push_back({b[i], 1});
        }
        bool flag = true;
        int sz1 = brr.size();
        int sz2 = arr.size();
        if (temp1 != temp2 or sz1 != sz2)
        {
            flag = false;
        }
        else
        {
            int i = 0;
            while (i < arr.size())
            {
                if (arr[i].first != brr[i].first || arr[i].second != brr[i].second)
                {
                    flag = false;
                }
                i+=1;
            }
        }
        if (!flag)
            cout << "NO" << nxt;
        else
            cout << "YES" << nxt;
    }
}