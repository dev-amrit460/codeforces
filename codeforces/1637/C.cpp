#include <bits/stdc++.h>

using namespace std;

long long doit()
{
    long long n;
    long long l = 0;
    cin >> n;
    vector<long long> arr(n + 5);
    vector<long long> brr(n + 5);

    for (auto i = 0; i < n; i++)
        cin >> arr[i];
    for (auto i = 0; i < n; i++)
        brr[i] = arr[i];

    if (n == 3)
    {
        if (arr[1] % 2 == 1)
            return -1;
        else
            return arr[1] / 2;
    }
    bool out = 1;
    for (int i = 1; i < n - 1; i++)
        if (arr[i] > 1)
            out = 0;
    if (out)
        return -1;
    for (int i = 1; i < n - 1; i++)
        l += (arr[i] + 1) / 2;
    return l;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        long long j = doit();
        cout << j << endl;
    }
    return 0;
}