/* toggle means if the bit is 1 the convert into 0 */

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x,k;
    cin >> x >> k;

    cout << (x ^ (1 << k)) << endl;

}
