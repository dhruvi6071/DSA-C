#include <stdio.h>

int maxProfit(int prices[], int n) {
    if (n <= 1) {
        return 0; // If there are no prices or only one price, profit is zero.
    }

    int maxProfit = 0; // Initialize the maximum profit to zero.
    int minPrice = prices[0]; // Initialize the minimum price to the first day's price.

    for (int i = 1; i < n; i++) {
        // Update the minimum price if the current price is lower.
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            // Calculate the profit by selling at the current price.
            int currentProfit = prices[i] - minPrice;

            // Update the maximum profit if the current profit is greater.
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    return maxProfit;
}

int main() {
    // Example usage:
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int prices2[] = {7, 6, 4, 3, 1};

    int result1 = maxProfit(prices1, sizeof(prices1) / sizeof(prices1[0]));
    int result2 = maxProfit(prices2, sizeof(prices2) / sizeof(prices2[0]));

    printf("Example 1: %d\n", result1); // Output: 5
    printf("Example 2: %d\n", result2); // Output: 0

    return 0;
}
