#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Divisors of %d: ", n);

    // Check every number from 1 to n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {          // i is a divisor
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal number of divisors: %d\n", count);
    return 0;
}