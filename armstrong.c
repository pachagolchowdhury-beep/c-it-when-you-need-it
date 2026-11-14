#include <stdio.h>
int main (){
    
int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers (Armstrong numbers are non-negative)
    if (num < 0) {
        printf("%d is not an Armstrong number.\n", num);
        return 0;
    }

    // Store the original number
    originalNum = num;

    // 1. Count the total number of digits using a while loop
    if (originalNum == 0) {
        n = 1;
    } else {
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }
    }

    // Reset originalNum to the input value
    originalNum = num;

    // 2. Calculate the sum of each digit raised to the power of n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        // Use round() to prevent floating-point precision errors with pow()
        result += round(pow(remainder, n));
        
        originalNum /= 10;
    }

    // 3. Compare the calculated sum with the original number
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
}