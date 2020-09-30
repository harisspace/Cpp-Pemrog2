#include <stdio.h>

int main() {
    int x, *ptr_x;

    x = 10.2;
    ptr_x = &x;
    printf("\n\n Menggunakan variabel biasa : ");
    printf("\n nilai dari x = %d", x);
    printf("\n Alamat dari x = %u", &x);
    printf("\n\n Dengan menggunakan pointer : ");
    printf("\n nilai dari x %d ", *ptr_x);
    printf("\n nilai dari x = %u ", ptr_x);
    printf("\n\n");

    return 0;
}