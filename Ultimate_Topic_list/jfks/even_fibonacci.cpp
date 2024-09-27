#include<bits/stdc++.h>
using namespace std;

set<int>himel;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n,sum = 0;
        cin >> n;
        long long int x=0,y =1;
        for(long long int i = 1; i <= n; i++)
        {
            long long int z = x + y;
            x = y;
            y = z;
            if(z > n)
            break;
            else if(z < n && z%2==0)
                 sum += z;

        }


        cout << sum << endl;
    }
}
