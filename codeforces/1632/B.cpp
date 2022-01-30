#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int n;
        cin>>n;
        vector<int> a;
        int k=pow(2,floor(log2(n-1)));
        for(int i=1;i<k;i++){
            a.push_back(i);
        }
        a.push_back(0);
        for(int i=k;i<n;i++){
            a.push_back(i);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
 }
 
 return 0;
}