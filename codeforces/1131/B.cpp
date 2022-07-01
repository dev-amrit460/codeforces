#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a=0,b=0,x=0,y=0,r;
    cin>>n;
    while(n--){
      x=a;
      y=b;
      cin>>a>>b;
      r+=max(0,min(a,b)-max(x,y)+(x!=y));
    }

	cout<<r+1;
}