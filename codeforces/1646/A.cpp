#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for (auto i = 0; i < t; i++)
    {
        long long n, s;
        cin >> n >> s;
        cout<< s / (n * n)<<endl;
    }
}