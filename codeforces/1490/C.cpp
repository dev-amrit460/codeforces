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
        int f=0;
        unordered_set<long long> s;
        for (long long i = 0; i*i*i < n; i++)
        {
            s.insert(i*i*i);
        }
        for(auto i:s)
        {
            if(s.find(n-i) != s.end())
            {
                cout <<"YES"<< nxt;
                f=1;
                break;
            }
        }
        if(f==0) cout <<"NO"<< nxt;
    }
}
