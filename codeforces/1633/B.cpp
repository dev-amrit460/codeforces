#include <bits/stdc++.h>
using namespace std;
void check(int o0, int o1, int mx)
{
    if (o0 == 0 || o1 == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        cout << mx << endl;
        return;
    }
}
int main()
{
    int p;
    cin >> p;
    while (p--)
    {
        string str;
        cin >> str;
        int mx = 0;
        int o0 = 0;
        int o1 = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
                o1++;
            else
                o0++;
            if (o0 > o1)
            {
                mx = max(mx, o1);
            }
            if (o0 < o1)
            {
                mx = max(mx, o0);
            }
        }

        check(o0, o1, mx);
    }
    return 0;
}