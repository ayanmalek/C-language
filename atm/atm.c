o#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void accdata();
void clear();

int main(void) {
    const int correctpin = 1810;
    int pin;
    int attempt = 0;
    const int maxattempt = 3;
    
    clear();
    printf("===================================\n");
    printf(" Welcome to Brother Hood Bank \n");
    printf("===================================\n\n");

    while (attempt < maxattempt) {
        printf("Enter PIN: ");
        if (scanf("%d", &pin) != 1) {
           
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) { /* flush */ }
            attempt++;
            printf("\nInvalid input. Please enter numbers only.\n");
            if (attempt >= maxattempt) {
                printf("\nToo many attempts for PIN authentication.\n");
                printf("-------------------------------------------\n");
				printf("Press Enter to exit...");
                getch();
                return 0;
            }
            printf("Press Enter to try again...");
            getch();
            clear();
            continue;
        }

        if (pin == correctpin) {
            clear();
            accdata();
            printf("\nPress Enter to exit...");
            getch();
            return 0; 
        } else {
            attempt++;
            printf("Please enter valid PIN. Attempts left: %d\n", maxattempt - attempt);
            if (attempt >= maxattempt) {
                printf("\nToo many attempts for PIN authentication.\n");
                printf("-------------------------------------------\n");
                printf("Press Enter to exit...\n");
                getch();
                return 0;
            }
            printf("Press Enter to try again...");
            getch();
            clear();
        }
    }
    printf("Press Enter to try again...\n");
    getch();
    clear();
    printf("===================================\n");
    printf("       Welcome to Secure Bank       \n");
    printf("===================================\n\n");
    
    
    	
        
        

    return 0;
}

void clear() {
    system("cls"); 
}

void accdata() {
    printf("===================================\n");
    printf("          Account Details          \n");
    printf("===================================\n");
    printf("Account Number : 89274109\n");
    printf("Customer Name  : Malek Ayan\n");
    printf("Address        : xyz\n");
    printf("===================================\n");
}

