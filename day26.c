#include <stdio.h>

int main() {
    int i, j, start, spaces;
    for(i = 1; i <= 5; i++) {
        // Print leading spaces for right alignment
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }
        start = 6 - i;
        for(j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

