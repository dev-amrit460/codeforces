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
         cin >> n;
        vector<long long> a(n);
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int f=false;
         if (n == 1)
            cout << "YES"<<nxt;
        else{
        int even=a[1]%2;
        int odd=a[0]%2;
        for(int i = 2; i < n; i++)
        {
            if(i%2==0 and a[i]%2!=odd){
                cout<<"NO"<<nxt;
                f=true;
                break;
            }
            else if(i%2!=0 and a[i]%2!=even){
                cout<<"NO"<<nxt;
                f=true;
                break;
            }
        }}
        if(!f){
            cout<<"YES"<<nxt;
        }
    }
    return 0;
}
