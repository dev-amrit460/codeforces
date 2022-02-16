#include <bits/stdc++.h>
using namespace std;

int main(){
long long t,ans=0,ans1=0;
cin>>t;
long long p=t;
unordered_map<long long,pair<long,long>> m;
while(t--){
long long n;
cin>>n;
m[n]={p-t,t+1};
}
long long k;
cin>>k;
while(k--){
long long h;
cin>>h;
if(m.find(h)!=m.end()){
ans+=m[h].first;
ans1+=m[h].second;
}
}
cout<<ans<<" "<<ans1<<endl;
}

