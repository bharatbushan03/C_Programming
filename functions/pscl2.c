#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int main() {
    int n;
    printf("Enter the number of rows for pascal triangle");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}
