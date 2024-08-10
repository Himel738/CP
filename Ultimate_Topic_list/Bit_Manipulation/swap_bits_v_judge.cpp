#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    int r = t;
    while(t--)
    {
        int x,y,p,z,count = 0,count2=0;
        cin >> x;
        p = x;
        z = __builtin_popcount(x);


        for(int i = 2; i > 0; i = i << 2)
        {
            if(x==0)
            {
                break;
            }

            if((p & i) != 0)
            {
                count++;
            }
            if((p & (i >> 1)) != 0)
            {
                count++;
            }

            if ((((x & i) != 0) && ((x & (i >> 1)) != 0)) || (((x & i) == 0) && ((x & (i >> 1)) == 0)))
            {
                continue;
            }

            else
            {
                x =  (x ^ i);
               x = (x ^ (i >> 1));
            }
            if(count == z)
            {
                break;
            }


        }
        cout << x << endl;
    }
}
