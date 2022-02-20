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
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            dep[i] = arr[i];
            m[arr[i]] = i;
        }

        int fs = arr[n - 1];
        int fs2 = arr[n - 2];

        int flag = 1;
        for (int i = 0; i <= n - 2; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << 0 << endl;
            continue;
        }

        if (fs2 - fs <= fs2)
        {
            if(fs2 <= fs){
            cout << n - 2 << endl;
            for (int i = 0; i <= n - 3; i++)
                cout << i + 1 << " " << n - 1 << " " << n << endl;
            continue;
            }
        }
        cout << -1 << endl;
    }

    return 0;
}