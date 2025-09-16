#include <stdio.h>

int main() 
{
    int start, end,num;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Palindrome series between %d and %d:\n", start, end);

    for (num = start; num <= end; num++) {
        int original = num;
        int reversed = 0, digit, temp = num;

        while (temp != 0) {
            digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp = temp / 10;
        }

        if (original == reversed) {
            printf("%d ", original);
        }
    }

    return 0;
}

