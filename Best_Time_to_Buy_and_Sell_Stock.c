#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int maxProfit = 0;
    int minPrice = prices[0];

    for (int i = 1; i < pricesSize; i++) {
        int currentProfit = prices[i] - minPrice;
        if (currentProfit > maxProfit) {
            maxProfit = currentProfit;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfit;
}

int main() {
    int size;
    printf("Enter number of Days:-");
    scanf("%d",&size);
    int prices[size];
    printf("Enter share price:-");
    for(int i=0;i<size;i++)
    {
       scanf("%d",&prices[i]);  
    }
    int result = maxProfit(prices,size);
    printf("Maximum profit: %d\n", result);

    return 0;
}
