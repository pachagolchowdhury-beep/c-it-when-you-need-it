#include <stdio.h>

int main() {
    float f, c, n;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &n);

    f = 1.8 * n + 32;       
    c = 0.56 * (n - 32);    

    printf("\nFahrenheit equivalent temperature is: %8.2f", f);
    printf("\nCentigrade equivalent temperature is: %8.2f\n", c);

    return 0;
}
 