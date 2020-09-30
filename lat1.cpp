#include <stdio.h>

using namespace std;

int jumlah(int *alm_a, int *alm_b,  int *alm_c);

int main() {
    int a, b, c;
    printf("input bilangan pertama : ");
    scanf("%d", &a);
    printf("input bilangan kedua : ");
    scanf("%d", &b);
    printf("input bilangan ketiga : ");
    scanf("%d", &c);
    jumlah(&a, &b, &c);
    printf("Outputnya = %d", *&a);
    printf("\n");
    printf("Outputnya = %d", *&b);
    printf("\n");
    printf("Outputnya = %d", *&c);
    printf("\n");
}

    int jumlah (int *alm_a, int *alm_b, int *alm_c) {
        *alm_a = *alm_a * 2;
        *alm_b = *alm_b * 2;
        *alm_c = *alm_c * 2;
        return 0;
    }