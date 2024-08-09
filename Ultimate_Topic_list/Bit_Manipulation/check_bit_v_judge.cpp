#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,l;
    cin >> n >> l;

    if((n & (1 << l)) != 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
