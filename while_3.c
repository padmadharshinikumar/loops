#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int n;
    scanf("%d", &n);

    int a;
    int d = 0;

    int i = 0;
    while (i < n && t > 0) {
        scanf("%d", &a);
        t = t - a;
        d++;
        i++;
    }

    if (t < 0) {
        t = 0;
    }

    printf("Days Used: %d\n", d);
    printf("Remaining Data: %dGB\n", t);

    return 0;
}