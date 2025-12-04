#include <stdio.h>

int main() {
    int customerNumber;
    char customerName[50];
    float pastReading, currentReading, unitsConsumed, chargePerUnit, totalBill;

    printf("Enter Customer Number: ");
    scanf("%d", &customerNumber);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);  // to accept full name with spaces

    printf("Enter Past Reading (in units): ");
    scanf("%f", &pastReading);

    printf("Enter Current Reading (in units): ");
    scanf("%f", &currentReading);

    printf("Enter Charge per Unit: ");
    scanf("%f", &chargePerUnit);

    // Calculate Units Consumed and Total Bill
    unitsConsumed = currentReading - pastReading;
    totalBill = unitsConsumed * chargePerUnit;

    // Print formatted output
    printf("\n\tElectricity Bill\n");
    printf("---------------------------------------------------------\n");
    printf("Customer Number      : %d\n", customerNumber);
    printf("Customer Name        : %s\n", customerName);
    printf("Past Reading         : %.2f\n", pastReading);
    printf("Current Reading      : %.2f\n", currentReading);
    printf("Units Consumed       : %.2f\n", unitsConsumed);
    printf("Charge Per Unit      : %.2f\n", chargePerUnit);
    printf("Amount to be paid(Rs.): %.2f\n", totalBill);
    printf("----------------------------------------------------------\n");

    return 0;
}
