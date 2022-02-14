#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(auto i=0;i<t;i++)
    {
        long long n; cin >> n;
        vector<long long> ans(n);
        vector<long long> bns(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
            bns[i]=ans[i];
        }
        set<int> st;
        unordered_map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            vector<long long> v;
            set<int>::iterator d = st.upper_bound(ans[i]);
            if (d == st.end())
            {
                st.insert(ans[i]);
                continue;
            }
            int maximun = INT_MIN;
            for (; d != st.end(); d++)
            {
                v.push_back(*d);
                if (*d > maximun)
                {
                    maximun = *d;
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                st.erase(v[i]);
            }
            st.insert(maximun);
        }
        m.clear();
        cout << st.size() << "\n";
    }
    return 0;
}