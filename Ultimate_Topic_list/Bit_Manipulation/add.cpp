/* A+B = (A^B) + 2 * (A&B)
   A+B = (A|B) + * (A&B)
 */
 #include<bits/stdc++.h>
 using namespace std;

 int main ()
 {
     int a,b;
     cin >> a >> b;

     cout  << ((a ^ b) + (2 * (a & b) )) << endl;
     cout << ((a | b) + ((a & b) )) << endl;

 }
