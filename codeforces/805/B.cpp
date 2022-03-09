#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
int a;cin>>a;
string s="";
if(a==1) cout<<"a";
else if(a==2) cout<<"aa";
else{
    int c=0;
while(a>1){
if(c%2==0) s+="aa";
else s+="bb";
c++;
a-=2;
}
if(a==1){
    if(s.back()=='a') s+="b";
    else s+="a";
}
cout<<s;
}
}


