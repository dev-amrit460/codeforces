#include <bits/stdc++.h>
using namespace std;
int CommonDigits(int n, int k)
{
    int count = 0;
    while (n && k)
    {
        int a = n % 10;
        int b = k % 10;
        if (a != b)
        {
            count++;
        }
        n /= 10;
        k /= 10;
    }
    while (n)
    {
        count++;
        n /= 10;
    }
    while (k)
    {
        count++;
        k /= 10;
    }
    return count;
}
int main()
{
    int p;
    cin >> p;
    while (p--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int k = (n + 6) / 7;
            int change1 = (k + 1) * 7;
            int change2 = (k)*7;
            int change3 = (k - 1) * 7;
            int mn = min(CommonDigits(change1, n), CommonDigits(change2, n));
            mn = min(mn, CommonDigits(change3, n));
            if (CommonDigits(n, change2) == mn)
            {
                cout << change2 << endl;
            }
            else if (CommonDigits(n, change1) == mn)
            {
                cout << change1 << endl;
            }
            else
            {
                cout << change3 << endl;
            }
        }

        
    }
    return 0;
}