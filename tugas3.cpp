#include <stdio.h>

char *nama_bulan(int n);

int main() {
    int bl;

    printf("Bulan (1-12) : \n");
    scanf("%d", &bl);
    printf("%s\n", nama_bulan(bl));
}

char *nama_bulan(int n) {
    static char *bulan[] = {
        "Kode bulan salah", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"
    };
    return ((n < 1 || n >12) ? bulan[0] : bulan[n]);
}