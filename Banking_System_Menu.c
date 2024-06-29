#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, amount=0, D, w;
    while (1) {
        printf("******************************\n");
        printf("          1. Check Balance     \n");
        printf("          2. Deposit Money     \n");
        printf("          3. Withdraw Money    \n");
        printf("          4. Exit              \n");
        printf("******************************\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: %d\n", amount);
                break;
            case 2:
                printf("Current Balance: %d\n", amount);
                printf("Enter the amount to deposit: ");
                scanf("%d", &D);
                amount = amount+D;
                printf("%d deposited to your Account\n", D);
                break;
            case 3:
                printf("Current Balance: %d\n", amount);
                printf("Enter the amount to withdraw: ");
                scanf("%d", &w);
                if (w <= amount) {
                    amount=amount-w;
                    printf("%d withdrawn from your Account\n", w);
                } else{
                    printf("Insufficient funds\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
