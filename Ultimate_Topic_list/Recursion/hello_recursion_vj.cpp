#include<bits/stdc++.h>
using namespace std;

void recursion(int * a,int n,int i,int sum)
{
    if(n < 0)
        return;
    else
    {
        sum = sum + a[n];

        if(n==0)
        {
            cout << "Case " << i << ": " << sum << endl;
        }
        recursion(a,n-1,i,sum);
    }
}
int main ()
{
    int t;
    cin >> t;

    int i;

    for(i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        int a[x];

        for(int j = 0; j < x; j++)
        {
            cin >> a[j];
        }
        int sum =0;
        recursion(a,x-1,i,sum);
    }
}
