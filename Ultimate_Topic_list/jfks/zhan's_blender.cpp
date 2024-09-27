#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n,x,y;
        cin >> n >> x >> y;

        if(x < y)
            cout << (long long int)ceil((double)n / x) << endl;
        else
            cout << (long long int)ceil((double)n / y) << endl;
    }
}
