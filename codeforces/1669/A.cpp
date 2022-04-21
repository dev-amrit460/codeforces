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


bool isPowerOf2 (int x)
{
  return x && (!(x&(x-1)));
}

int main()
{
    fast
    test
    {
    long long n;
    cin>>n;
    if(n<=1399) cout<<"Division 4"<<nxt;
    else if(n>=1400 and n<=1599) cout<<"Division 3"<<nxt;
    else if(n>=1600 and n<=1899) cout<<"Division 2"<<nxt;
    else cout<<"Division 1"<<nxt;
    }
    return 0;
}
