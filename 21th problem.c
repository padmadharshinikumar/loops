#include <stdio.h>

int main() {
    int n, i, d;
    int dec = 0, base = 1;

    scanf("%d", &n);

    for (i = n; i != 0; i = i / 10) {
        d = i % 10;
        dec = dec + d * base;
        base = base * 2;
    }

    printf("%d", dec);

    return 0;
}
