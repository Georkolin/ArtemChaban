#include <stdio.h>

int main()
{
    float x, y, z, zag_time, rez;
    printf("Ведіть три значення\n");
    printf("Час першого гостя:\n");
    scanf("%f", &x);
    printf("Час другого гостя:\n");
    scanf("%f", &y);
    printf("Час третього гостя:\n");
    scanf("%f", &z);
    
    zag_time = x + y + z;
    
    rez = zag_time / 3;
    
    printf("Час в годинах який потрібен для трьох гостей = %0.2f",rez);

    return 0;
}