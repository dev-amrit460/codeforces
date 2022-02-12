#include <bits/stdc++.h>

using namespace std;

long long mex(vector<long long> array, long long n)
{
    long long shit = 0, add = 0, stre = 0;
    for (long long i = 0; i < array.size(); i++)
    {
        if (array[i] != shit)
        {
            add += (i - stre + 1) + shit;
            stre = i + 1;
            shit = 0;
        }
        else
        {
            while (i < n && array[i] == shit)
                shit++;
            add += (i - stre + 1) + shit;
            stre = i + 1;
            shit = 0;
        }
    }
    return add;
}
long long doit()
{
    long long n;
    cin >> n;
    long long add = 0;
    vector<long long> array(n);
    for (long long i = 0; i < n; i++)
        cin >> array[i];

    for (long long i = 0; i < n; i++)
    {
        vector<long long> ans;
        for (long long j = i; j < n; j++)
        {
            ans.push_back(array[j]);
            long long data = mex(ans, ans.size());
            add += data;
        }
    }
    return add;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        long long ans = doit();
        cout << ans << endl;
    }
}