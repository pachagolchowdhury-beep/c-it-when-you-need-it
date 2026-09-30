#include <stdio.h>

int main() {
    int type;
    float units, bill = 0.0f;

    printf("Select customer type:\n");
    printf("1. Domestic\n");
    printf("2. Commercial\n");
    printf("3. Industrial\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &type);

    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    switch (type) {
        case 1: // Domestic
            if (units <= 100) {
                bill = units * 3.5f;
            } else if (units <= 200) {
                bill = 100 * 3.5f + (units - 100) * 4.5f;
            } else {
                bill = 100 * 3.5f + 100 * 4.5f + (units - 200) * 6.0f;
            }
            break;

        case 2: // Commercial
            if (units <= 100) {
                bill = units * 5.0f;
            } else if (units <= 250) {
                bill = 100 * 5.0f + (units - 100) * 6.5f;
            } else {
                bill = 100 * 5.0f + 150 * 6.5f + (units - 250) * 8.0f;
            }
            break;

        case 3: // Industrial
            if (units <= 200) {
                bill = units * 7.0f;
            } else if (units <= 500) {
                bill = 200 * 7.0f + (units - 200) * 8.5f;
            } else {
                bill = 200 * 7.0f + 300 * 8.5f + (units - 500) * 10.0f;
            }
            break;

        default:
            printf("Invalid customer type.\n");
            return 1;
    }

    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}