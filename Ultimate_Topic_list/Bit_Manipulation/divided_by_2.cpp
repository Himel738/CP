/* if you want to divide a number by 2 just right shift the number 1 places
   x is a number-
   x/2 = x >> 1;
   x/4 = x >> 2;
   x/8 = x >> 3;
   so  x /2 to the power k is = x >> k
   and
   if you want to multiply x * 2 to the power k = x << k
 */
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin >> x >> y;
    int z = log2(y);

    cout << (x >> z) << endl;
}
