#include <stdio.h>

int main() {
    int i, j, spaces;
    for(i = 1; i <= 5; i++) {
        // Print spaces for indentation
        for(spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }
        // Print stars decreasing each row
        for(j = 6 - i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
