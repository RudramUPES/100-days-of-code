#include <stdio.h>

int main() {
    int i, j, n = 4;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i + 1; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Bottom half
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= n - i + 2; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 3); j++) {
            if((2*i-3)>0)
                printf("*");
        }
        if((2*i-3)>0)
            printf("\n");
    }
    return 0;
}
