#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);

    return 0;
}
