#include <stdio.h>

int main() {
    int n = 4;

    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            if (j > i)
                printf("%d ", j);
            else
                printf("%d ", i);
        }
        for (int j = 2; j <= n; j++) {
            if (j > i)
                printf("%d ", j);
            else
                printf("%d ", i);
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            if (j > i)
                printf("%d ", j);
            else
                printf("%d ", i);
        }
        for (int j = 2; j <= n; j++) {
            if (j > i)
                printf("%d ", j);
            else
                printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
