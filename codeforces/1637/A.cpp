#include <bits/stdc++.h>

using namespace std;

void doit()
{
    long long n;
    cin >> n;
    vector<long long> array(n);
    vector<long long> brray(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> array[i];
        brray[i] = array[i];
    }
    sort(brray.begin(), brray.end());
    for (long long i = 0; i < n; i++)
    {
        if (array[i] != brray[i])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        doit();
    }
}