#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    printf("Enter third number: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("The largest number is %d\n", a);
    } else if (b > c) {
        printf("The largest number is %d\n", b);
    } else {
        printf("The largest number is %d\n", c);
    }

    return 0;
}