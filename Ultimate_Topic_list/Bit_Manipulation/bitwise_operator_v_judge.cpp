#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int x = 0, y = 0, z = 0;

    for(int i = 1; i < n; i++) {
        for(int j = i+1; j <= n; j++) {
            if((i & j) < k) {
                x = (x > (i & j)) ? x : (i & j);
            }
            if((i | j) < k) {
                y = (y > (i | j)) ? y : (i | j);
            }
            if((i ^ j) < k) {
                z = (z > (i ^ j)) ? z : (i ^ j);
            }
        }
    }
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}
