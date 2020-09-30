// aziz = 57082
// defa = aziz
// dewi = defa + 1;
// a. berapa nilai defa?
// b. berapa nilai dewi?

#include <stdio.h>

int main() {
    int *defa, dewi;
    int aziz = 57082;

    defa = &aziz;
    dewi = *defa + 1;

    printf("nilai defa adalah %.2d", *defa);
    printf("\nnilai dewi adalah %.2d", dewi);

    return 0;
}