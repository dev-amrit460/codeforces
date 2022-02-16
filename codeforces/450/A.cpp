#include <bits/stdc++.h>
using namespace std;

int main(){
long long t,k;
cin>>t>>k;
long long back=0;
deque<pair<long long,long long>> v;
for(auto i=0;i<t;i++){
    long long n;
    cin>>n;
    v.push_back({n,i+1});
}
while(v.size()!=1){

    if(v.front().first<=k){
        v.pop_front();
    }
    else{
        
        v.push_back({v.front().first-k,v.front().second});
        v.pop_front();
    }

}
cout<<v.front().second<<endl;
}

