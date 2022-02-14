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
        vector<long long> nums;
        vector<long long> nums1;
        for (auto i = 0; i < n; i++)
        {
            long long k;
            cin >> k;
            if (k & 1)
                nums1.push_back(k);
            else
                nums.push_back(k);
        }
        if (is_sorted(nums.begin(), nums.end()) and is_sorted(nums1.begin(), nums1.end()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}