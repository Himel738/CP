#include<bits/stdc++.h>
using namespace std;
void recursion(int * a,int n)
{
    if(n < 0)
    {
        return;
    }
    else
    {
        if(n % 2 == 0)
        {
            if(n==0)
            {
                cout << a[n] << endl;
            }
            else
            {
                cout << a[n] << " ";
            }
        }
        recursion(a,n-1);
    }
}
int main ()
{
    int n;
    cin >> n;
    int a[n];

    for(int i =0; i < n; i++)
    {
        cin >> a[i];
    }

    recursion(a,n-1);
}
