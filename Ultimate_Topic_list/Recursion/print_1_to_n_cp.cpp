

#include<bits/stdc++.h>
using namespace std;

void recursion(int n,int x)
{
    if(x == n+1)
    {
        return;
    }
    else
        cout << x << endl;
        recursion(n,x+1);
}

int main ()
{
    int n;
    cin >> n;
    recursion(n,1);
}
