#include <stdio.h>

int main() {
    int n, i, d, temp, fact, sum = 0;

    scanf("%d", &n);
    temp = n;

    for (; temp != 0; temp = temp / 10) {
        d = temp % 10;
        fact = 1;

        for (i = 1; i <= d; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
    }

    if (sum == n) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
