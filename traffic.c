#include <stdio.h>

int main() {
    int choice;
    int Red, Yellow, Green;

    // Show menu
    printf("Choose a traffic light:\n");
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Red light: Stop!\n");
            break;
        case 2:
            printf("Yellow light: Ready to stop!\n");
            break;
        case 3:
            printf("Green light: Go!\n");
            break;
        default:
            printf("Invalid choice. Please select (1-3).\n");
    }
    return 0;
}