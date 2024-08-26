
#include<bits/stdc++.h>
using namespace std;

long long int recursion(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return recursion(n-1) + recursion(n-2);
    }
}

int main ()
{
    long long int n;
    cin >> n;
    cout << recursion(n) << endl;
}
