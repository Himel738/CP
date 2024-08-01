/* You have to find K=1 th(k is the index of bit) bit is set or not
        12 = 1 1 1 0 and 1 = 0 0 0 0 1
so 1 << k  = 0 0 1 0  if(x&(1<<k)!= 0 its set else not set. the condition if(x & (1 << k) == 1) will not work because '==' operator have higher precedence then '&' operator */

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,k;
    cin >> x >> k;

    if((x & (1 << k))!= 0)
    {
        cout << "The Bit Is Set" << endl;
    }
    else
    {
        cout << "The Bit is Not Set" << endl;
    }

}
