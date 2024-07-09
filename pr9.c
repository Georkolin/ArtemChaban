#include <stdio.h>
#include <stdlib.h>
int min_steps(int x, int y) {
    int distance = y - x;
    int total_steps = 0;
    int step = 1;

    while (distance > 0) {
        if (distance >= 2 * step) {
            distance -= (2 * step);
            total_steps += 2;
            step++;
        } else if (distance >= step) {
            total_steps++;
            distance -= step;
            step = 1;
        } else {
            total_steps++;
            distance--;
        }
    }
    return total_steps;
}
int main() {
    int x, y;
    printf("Введіть значення x і y: ");
    scanf("%d %d", &x, &y);
    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);
    return 0;
}