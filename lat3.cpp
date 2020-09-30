#include <stdio.h>
#include <iostream>

int main() {
    float a1, a2, a3;
    float *p_a3;
    printf("input bilangan pertama : ");
    scanf("%f", &a1);
    printf("input bilangan kedua : ");
    scanf("%f", &a2);
    p_a3 = &a3;
    *p_a3 = a1 + a2;
    
    printf("\n Nilai a3 (dari variabelnya) = %d", p_a3);
    printf("\n Nilai a3 (dari pointernya) = %d", *p_a3);
    printf("\n\n");
}