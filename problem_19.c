#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < 2*n; i++)
        printf("*");
    printf("\n");

 
    for (int i = n-1; i >= 1; i--) {
        for (int j = 0; j < i; j++)
            printf("*");
        for (int j = 0; j < 2*(n-i); j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

   
    for (int i = 1; i <= n-1; i++) {
        for (int j = 0; j < i; j++)
            printf("*");
        for (int j = 0; j < 2*(n-i); j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    // Bottom full line
    for (int i = 0; i < 2*n; i++)
        printf("*");

    return 0;
}
