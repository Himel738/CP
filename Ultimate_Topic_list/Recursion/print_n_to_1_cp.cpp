


#include<bits/stdc++.h>
using namespace std;

void recursion(int n)
{
    if(n==0)
    {
        return;
    }
    else
        cout << n << endl;
        recursion(n-1);
}

int main ()
{
    int n;
    cin >> n;
    recursion(n);
}