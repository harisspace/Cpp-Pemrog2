#include <stdio.h>

using namespace std;

float jumlah(float *alm_a, float *alm_b, float *alm_c);

float jumlah(float *alm_a, float *alm_b, float *alm_c) {
    *alm_c = (*alm_a) * (*alm_b);
    return 1;
}

int main() {
    float a, b, c;
    float *p_c;
    printf("Input bilangan pertama : ");
    scanf("%f", &a);
    printf("input bilangan kedua : ");
    scanf("%f", &b);
    p_c = &c;
    jumlah(&a, &b, p_c);
    printf("\n Hasil kali kedua bilangan = %.2f", *p_c);
    printf("\n");
}

