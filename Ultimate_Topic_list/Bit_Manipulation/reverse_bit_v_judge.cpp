#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        unsigned int n,y=0,z=32;
        cin >> n;
        while(z--)
        {
            int x = 1;
            if((n & x) != 0)
            {
                y = (y << 1);
                y = (y | 1);
            }
            else
            {
                y = (y << 1);
            }
            n = (n >> 1);
        }
        cout << y << endl;

    }
}
