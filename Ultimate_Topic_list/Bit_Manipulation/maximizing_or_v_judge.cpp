#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int l,r,maxi=0;
    cin >> l >> r;

    for(int i = l; i <= r; i++)
    {
        for(int j = i; j <= r; j++)
        {
           maxi = max(maxi,(i^j));
        }
    }
    cout << maxi << endl;

}
