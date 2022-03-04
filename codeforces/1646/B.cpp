#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for (auto i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);

        for (auto j = 0; j < n; j++){
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        vector<long long> b(n);
         vector<long long> c(n); 
        b[0] = a[0];
        c[n-1] = a[n-1];
        for (auto j = 1; j < n; j++){
            b[j] = a[j] + b[j - 1];
        }
        for(int i=n-2;i>=0;i--){
            c[i]=a[i]+c[i+1];
        }
        int f=0;
        int o=1,j=n-1;
        while(o<j)
    {
        if(b[o]<c[j])
        {
            f=1;
            break;
        }
        else{
            o++;
            j--;
        }
    }
        if(f==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}