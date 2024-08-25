#include <bits/stdc++.h>
using namespace std;

int main ()
{
    const int mod = 1e9 + 7;
    long long int n;
    cin >> n;

    long long int i;
    long long int x=1;

    for( i = 1; i <= n; i++)
    {
        x = (x * 2) % mod;
    }

    cout << x << endl;

    return 0;
}
