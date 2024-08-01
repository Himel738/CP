
/* given a value check if its power of 2 means 8 = 2^3.
   1st approach:
   if you divided the number by 2 until it reached 1.if it reached 1 then its divisable else not
   2nd approach:
   counting by set bit if the set bit count is 1 then its divisable else not
   3rd approach:
   by right shifting the value of x until we find value 1 else not.
   4 th approach:
   log operation
   (log2(N)) ceil and floor value will be same
   else not divisable
*/
#include<bits/stdc++.h>
using namespace std;
int ispower(int x,int z)
{
    int count = 0;
    while(z <= x)
    {
        if((x & z) != 0)
        {
            count++;
        }
        z = z << 1;
    }
    return count;
}
int main ()
{
    int y;
    int x;
    cin >> x;
    int z = 1;
    y = ispower(x,z);

    y==1 ? cout << "Power of 2"<< endl : cout << "Not Power of 2" << endl;
}
