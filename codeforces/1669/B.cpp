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
        unordered_map<int,int>mp;
        int n;
        cin >> n;
        int arr[n];
        bool a=false;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second>=3)
            {
                cout<<i.first<<nxt;
                a=true;
                break;
            }
        }
        if(!a)
            cout<<-1<<nxt;

    }
    return 0;
}
