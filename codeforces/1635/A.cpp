#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], dep[n];
        for (auto i = 0; i < n; i++)
        {
            cin >> arr[i];
            dep[i] = arr[i];
        }
        long long out = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < 31; j++)
            {
                if ((long long)1 << j & arr[i])
                {
                    out = out | (long long)1 << j;
                }
            }
        }
        cout << out << endl;
    }
    return 0;
}