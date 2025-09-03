//Find profit or loss percentage

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss, percentage;
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profitLoss = sellingPrice - costPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Profit = %.2f, Profit Percentage = %.2f%%\n", profitLoss, percentage);
    } 
    else if (costPrice > sellingPrice) {
        profitLoss = costPrice - sellingPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Loss = %.2f, Loss Percentage = %.2f%%\n", profitLoss, percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
