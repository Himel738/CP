
#include<bits/stdc++.h>
using namespace std;

void recursion(unsigned long long int n,unsigned long long int count)
{
    if(n == 1)
    {
        return;
    }
    else
    {
        if( (n & 1) == 0)
        {
            if(count == 0)
            {
                cout << n << " ";
                count++;
            }
            if(n == 1)
                cout << n << endl;
            else
               cout << n / 2 << " ";
            n = n / 2;
        }
        else
        {
            if(count == 0)
            {
                cout << n << " ";
                count++;
            }
            if(n == 1)
                cout << n << endl;
            else
               cout << (n * 3) + 1 << " ";
            n = (n*3)+1;
        }
    }
    recursion(n,count);
}
int main ()
{
    unsigned long long int n,count=0;
    cin >> n;
    if(n==1)
    {
        cout << "1" << endl;
        return 0;
    }
    recursion(n,count);
}
