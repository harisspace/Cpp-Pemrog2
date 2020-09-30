#include <stdio.h>

int main() {
    char *alamat_x, x, y, z;

    x = 'J';        // initialasasi value x yaitu J
    alamat_x = &x;  // alamat_x berisi alamat variabel x
    y = x;          // data y sama dengan x;
    z = *alamat_x;   // z berisi alamat x maka z = x;

    printf("Nilai x : %c\n", x);
    printf("Nilai y : %c\n", y);
    printf("Nilai z : %c\n", z);
    printf("Nilai x: berada di alamat %p\n", x);
}