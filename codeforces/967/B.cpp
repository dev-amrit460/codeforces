#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
int n,A,B, cnt=0, total=0;
    cin>> n>>A>>B;
    vector<int> siz(n);
    for(int i=0;i<n;i++){
        cin>> siz[i];
        total+=siz[i];
    }

    int first= siz[0];

    // sort(siz+1,siz+n);
    sort(siz.begin()+1,siz.end());

    for(int i=n-1;i>0;i--){

        if(first*A/total>=B)
            break;

        total-=siz[i];
        cnt++;
    }

    cout<< cnt<< endl;
}