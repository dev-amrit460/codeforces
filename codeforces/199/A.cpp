#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define nxt "\n"
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int swapBits(int x, int p1, int p2, int n)
{
    // Code Here
    unsigned int set1 = (x >> p1) & ((1U << n) - 1);
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);
    cout << set1 << " " << set2 << endl;
    unsigned int Xor = (set1 ^ set2);
    cout << Xor << endl;
    Xor = (Xor << p1) | (Xor << p2);
    cout << Xor << endl;
    unsigned int result = x ^ Xor;
    return result;
}
signed main()
{
    fast 
    // int t;
    // cin >> t;
    // while (t--)
    // {
        
    // }
    int t; cin >> t;
    cout<<0<<" "<<0<<" "<<t;
}