#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y,z,j,p=0;
        cin >> x;
        y=1;
        z= x;
        j=1;

        for(int i = 2; i > 0; i = i << 2)
        {
            if(y > z)
            {
                break;
            }
            if((x & i)==(x & (i >> 1)))
            {
                y = y << (j);

                continue;
            }
            else
            {
                x =  (x ^ i);
               x = (x ^ (i >> 1));
               y= y << (j);
            }

            j+=2;
        }
        cout << x << endl;
    }
}
