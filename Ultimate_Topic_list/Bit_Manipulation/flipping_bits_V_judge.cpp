#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        unsigned int n;
        cin >> n;
        int x = 32,k=1;
        while(x--)
        {
            n = (n ^ k);
            k = k << 1;
        }
        cout << n << endl;
    }
}
