#include <stdio.h>

int main() {
    int n, i, numerator = 1, denominator = 2;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i == 1) {
            sum += 1;
        } else {
            sum += (float)numerator / denominator;
        }
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}
