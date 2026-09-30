#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0f, amount;

    while (1) {
        printf("\n=== Banking Menu ===\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else {
                    balance += amount;
                    printf("Deposited Rs. %.2f successfully.\n", amount);
                }
                break;

            case 2: 
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= amount;
                    printf("Withdrew Rs. %.2f successfully.\n", amount);
                }
                break;

            case 3: 
                printf("Current balance: Rs. %.2f\n", balance);
                break;

            case 4: 
                printf("Exiting banking system. \n");
                return 0;

            default:
                printf("Invalid choice. Please enter 1-4.\n");
                break;
        }
    }

    return 0;
}