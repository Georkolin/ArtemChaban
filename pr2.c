#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}
int find_lcm(int numbers[], int count) {
    int result = numbers[0];
    for (int i = 1; i < count; ++i) {
        result = lcm(result, numbers[i]);
    }
    return result;
}

int main() {
    int p;
    printf("Введіть кількість чисел (2 ≤ p ≤ 20): ");
    scanf("%d", &p);
    if (p < 2 || p > 20) {
        printf("Кількість чисел має бути від 2 до 20.\n");
        return 1;
    }

    int numbers[20];
    printf("Введіть %d натуральних чисел, розділених пробілом:\n ", p);
    for (int i = 0; i < p; ++i) {
        scanf("%d", &numbers[i]);
    }
    int result = find_lcm(numbers, p);
    printf("Найменше спільне кратне заданих чисел: %d\n", result);

    return 0;
}