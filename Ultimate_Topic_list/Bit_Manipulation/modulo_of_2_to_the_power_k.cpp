
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x;
    cin >> n >> x;

    int k = log2(x);

    cout << (n & (x - 1)) << endl;
}
