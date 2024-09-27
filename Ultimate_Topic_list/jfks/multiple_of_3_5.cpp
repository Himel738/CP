#include<bits/stdc++.h>
using namespace std;

int calculation(int x,int n)
{
    int z = n / x;

    return (z * (2 * x + (z-1)*x)) / 2;
}

int main ()
{
    int t;
    cin >> t;
    long long int sum = 0;
    while(t--)
    {
        int n;
        cin >> n;
        n--;

        int x = (calculation(3,n) + calculation(5,n)) - calculation(15,n);

        cout << x << endl;

    }
}
