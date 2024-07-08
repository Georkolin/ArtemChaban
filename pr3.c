#include <stdio.h>

#define MAX_P 30

int main() {
    int p;
    printf("Введіть ціле число p (p ≤ 30): ");
    scanf("%d", &p);
    if (p < 1 || p > MAX_P) {
        printf("Число p має бути від 1 до %d\n", MAX_P);
        return 1;
    }
    long long dp[MAX_P + 1][2] = {0};
    dp[1][0] = 2;
    dp[1][1] = 0;

    if (p > 1) {
        dp[2][0] = 4; 
        dp[2][1] = 0;
    }
    for (int i = 3; i <= p; ++i) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }
    long long result = dp[p][0] + dp[p][1];
    printf("Кількість чисел із %d розрядів: %lld\n", p, result);
    return 0;
}