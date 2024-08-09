#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,k,maxi = 0;
        cin >> n >> k;

        for(int i = 1; i < n; i++)
        {
            for(int j = i + 1 ; j <= n; j++)
            {
                if((i & j) < k)
                {
                    maxi = max(maxi,(i & j));
                }
            }
        }
        cout << maxi << endl;
    }
}
