#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x;
    cin >> x;

    if( (x & (x-1)) != 0)
    {
        cout << "Not Power of 2" << endl;
    }
    else
    {
        cout << "Power of 2" << endl;
    }
}
