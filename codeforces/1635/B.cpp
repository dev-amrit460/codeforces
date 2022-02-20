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
        map<int, int> m;
        for (auto i = 0; i < n; i++)
        {
            cin >> arr[i];
            dep[i] = arr[i];
            m[arr[i]]++;
        }
        int res = 0;
        if (n <= 2)
        {
            cout << 0 << endl;
            for (auto i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {

                if (arr[i + 1] < arr[i] and arr[i] > arr[i - 1])
                {
                    int r1 = arr[i];
                    int r2 = (i + 2 < n) ? arr[i + 2] : INT_MIN;
                    int r3 = (i - 1 >= 0) ? arr[i - 1] : INT_MIN;
                    int ins = max(r1, r2);
                    arr[i + 1] = ins;
                    dep[i + 1] = ins;
                    res++;
                }
            }
            cout << res << endl;
            for (auto i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}