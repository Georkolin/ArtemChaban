#include <stdio.h>
#include <string.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    char word[15];
    printf("Введіть слово: ");
    scanf("%s", word);
    int length = strlen(word);
    int char_count[256] = {0}; 
    for (int i = 0; i < length; i++) {
        char_count[(int)word[i]]++;
    }
    unsigned long long anagrams = factorial(length);
    for (int i = 0; i < 256; i++) {
        if (char_count[i] > 1) {
            anagrams /= factorial(char_count[i]);
        }
    }
    printf("Кількість можливих анаграм: %llu\n", anagrams);
    return 0;
}