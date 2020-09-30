#include <stdio.h>

float jumlah(float *x, float *y, float *alm_c) {
    *alm_c = *x + *y;
    return 0;
}

int main() {
    float a, b, c;
    float *p_c = &c;

    printf("input bilangan pertama : ");
    scanf("%f", &a);
    printf("input bilangan kedua : ");
    scanf("%f", &b);
    jumlah(&a, &b, p_c);
    printf("\n Jumlah kedua bilangan = %.3f", *p_c);
    printf("\n");
}


