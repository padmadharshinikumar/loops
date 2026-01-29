// #include <stdio.h>
//
// int main() {
//     int n;
//     scanf("%d",&n);
//     if (1<=n && n<=1000) {
//         for (int i=1;i<=n;i++) {
//                 printf("%d ",i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
//
// int main() {
//     int n;
//     int fact = 1;
//
//     scanf("%d", &n);
//
//     for (int i = 1; i <= n; i++) {
//         fact  = fact*i;
//     }
//
//     printf("%d", fact);
//
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     int sum=0;
//     scanf("%d",&n);
//     if (1<=n && n<=1000) {
//         for (int i=1;i<=n;i++) {
//             if (i%2==0) {
//                 sum=sum+i;
//             }
//
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

#include<stdio.h>
int main() {
    int n;
    int ld;
    scanf("%d",&n);
    for (int i=0;i<=n;i++) {
        ld=(n%10);
        printf("%d",ld);
    }

    return 0;
}

#include<stdio.h>
int main() {
    int n;
    int ld=0;
    scanf("%d",&n);
    for (int i=0;i<=n;i++) {

        ld=(i%10);

    }
    printf("%d",ld);

    return 0;
}


















