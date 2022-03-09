#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v;
    vector<int> w;
    int j=2;
    for(int i=0;i<a;i++){
        if(i<=b-1){
            v.push_back(pow(2,i));
        }
        else{
            v.push_back(1);
        }
    }
    for(int i=0;i<a;i++){
        if(i<=c-1){
            w.push_back(pow(2,i));
        }
        else{
            w.push_back(pow(2,c-1));
        }
    }
    cout<<accumulate(v.begin(),v.end(),0)<<" "<<accumulate(w.begin(),w.end(),0);
}