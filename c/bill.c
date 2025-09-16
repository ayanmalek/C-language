#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0, tax, grandTotal;
    
    printf("******** Welcome to Foodie Billing System ********\n");
    printf("Menu:\n");
    printf("1. Pizza       - Rs. 250\n");
    printf("2. Burger      - Rs. 120\n");
    printf("3. Cold Drink  - Rs. 50\n");
    printf("4. Fries       - Rs. 100\n");
    printf("5. Exit and Print Bill\n");

    do {
        printf("\nEnter item number (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter quantity of Pizza: ");
                scanf("%d", &qty);
                total += qty * 1;
                break;
            case 2:
                printf("Enter quantity of Burger: ");
                scanf("%d", &qty);
                total += qty * 1;
                break;
            case 3:
                printf("Enter quantity of Cold Drink: ");
                scanf("%d", &qty);
                total += qty * 1;
                break;
            case 4:
                printf("Enter quantity of Fries: ");
                scanf("%d", &qty);
                total += qty * 1;
                break;
            case 5:
                printf("\nGenerating your bill...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    tax = total * 0.05;  // 5% GST
    grandTotal = total + tax;

    printf("\n=========== Final Bill ===========\n");
    printf("Subtotal       : Rs. %.2f\n", total);
    printf("GST (5%%)       : Rs. %.2f\n", tax);
    printf("Total Amount   : Rs. %.2f\n", grandTotal);
    printf("==================================\n");
    printf("Thank you! Visit Again!\n");

    return 0;
}

