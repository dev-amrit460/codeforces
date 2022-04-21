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
        long long n,out=0;
        cin >> n;
        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        unordered_map<string, long long> m;
        unordered_map<char, long long> m1;
        unordered_map<char, long long> m2;
        for (long long i = n - 1; i > -1; i--)
        {

            long long calc = m1[arr[i][0]] + m2[arr[i][1]];
            long long temp = 2 * m[arr[i]];
            out = out + calc - temp;
            m[arr[i]]++,m1[arr[i][0]]++,m2[arr[i][1]]++;
        }
        cout << out << nxt;
    }
}
