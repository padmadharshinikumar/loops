#include <stdio.h>

int main() {
    int n, i, count = 0;

    scanf("%d", &n);

    for (i = n; i != 0; i = i / 10) {
        count++;
    }

    printf("%d", count);

    return 0;
}
