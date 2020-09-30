#include <stdio.h>

int misteri3(char *s);

int main() {
    char str;
    printf("Ketikkan sebuah string : ");
    scanf("%s", &str);
    printf("%d\n", misteri3(&str));
    return 0;
}

int misteri3(char *s) {
    int x = 0;
    for (*s ; *s != '\0'; *s++) {
        ++x;
    }
    return x;
}