#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    for (auto i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int mx=INT_MIN;
        int sum=0;
        for (auto j = 0; j < n; j++){
            cin >> a[j];
            mx=max(mx,a[j]);
            sum+=a[j];
        }
        int avg=sum/(n-1)+(sum%(n-1)!=0);
        avg>mx?cout<<avg*(n-1)-sum<<endl:cout<<mx*(n-1)-sum<<endl;
    }
}