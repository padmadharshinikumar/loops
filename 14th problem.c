#include <stdio.h>

int main() {
    int n, i, d, count = 0;

    scanf("%d", &n);

    for (i = n; i != 0; i = i / 10) {
        d = i % 10;
        if (d % 2 == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
