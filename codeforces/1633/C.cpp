#include <bits/stdc++.h>
using namespace std;
long long min(long long a, long long b)
{
    return ((a + b - 1) / b);
}
int main()
{
    long long p;
    cin >> p;
    while (p--)
    {
        long long a, b;
        cin >> a >> b;
        long long c, d;
        cin >> c >> d;
        long long e, f, g;
        cin >> e >> f >> g;
        int fl = 0;
        for (long long i = 0; i <= e; i++)
        {
            long long o1 = i;
            long long tu = e - o1;
            long long op2 = min((a + o1 * g), d);
            long long op1 = min(c, (b + tu * f));
            if (op1 <= op2)
            {
                cout << "YES"
                     << endl;
                fl = 1;
                break;
            }
        }
        if (fl == 0)
        {
            cout << "NO"
                 << endl;
        }
    }
    return 0;
}