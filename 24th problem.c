#include <stdio.h>

int main() {
    int n, i, rev = 0, temp;

    scanf("%d", &n);
    temp = n;

    for (i = temp; i != 0; i = i / 10) {
        rev = rev * 10 + (i % 10);
    }

    if (rev == n) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
