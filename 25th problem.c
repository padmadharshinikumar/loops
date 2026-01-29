#include <stdio.h>

int main() {
    int n, temp, i, d;
    int digits = 0;
    int sum = 0;
    int power, j;

    scanf("%d", &n);

    /* Count number of digits */
    for (temp = n; temp != 0; temp = temp / 10) {
        digits++;
    }

    /* Calculate Armstrong sum */
    for (temp = n; temp != 0; temp = temp / 10) {
        d = temp % 10;
        power = 1;

        for (j = 1; j <= digits; j++) {
            power = power * d;
        }

        sum = sum + power;
    }

    if (sum == n) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
