#include <stdio.h>

int main() {
    int tgllahir[3], *tgl;
    int i;

    tgl = tgllahir;
    tgllahir[0] = 21;
    tgllahir[1] = *tgl - 17;
    tgllahir[2] = *tgl + 1964;



    printf("tanggal lahir : ");
    for(i = 0; i < 3; i++) {
        printf("\n  %d", *(tgl+i));
    }
}