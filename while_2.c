#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int b;
    scanf("%d", &b);

    int a;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);
        b = b + a;

        if (b < 2000) {
            c++;
        }

        i++;
    }

    printf("Final Balance: %d\n", b);
    printf("Low Balance Days: %d\n", c);

    return 0;
}
