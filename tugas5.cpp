#include <iostream>
#include <stdio.h>

using namespace std;

void kalikan(float *alm_a, float *alm_b, float *alm_c) {
    *alm_a = *alm_a * 2;
    *alm_b = *alm_b * 2;
    *alm_c = *alm_c * 2;
};

int main() {
    float a, b, c;

    printf("\nMasukkan nilai untuk variabel a : ");
    scanf("%f", &a);
    printf("\nMasukkan nilai untuk variabel b : ");
    scanf("%f", &b);
    printf("\nMasukkan nilai untuk variabel c : ");
    scanf("%f", &c);

    // jalankan function
    kalikan(&a, &b, &c);

    printf("\nNilai variabel setelah dikali dua : %f", *&a);
    printf("\nNilai variabel setelah dikali dua : %f", *&b);
    printf("\nNilai variabel setelah dikali dua : %f", *&c);

    return 0;
}