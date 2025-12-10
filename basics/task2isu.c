#include<stdio.h>
#include<string.h>

int main() {
    int option_1, option_2, option_3;
    char str[1000];
    int i, len, is_peli = 1;

    int start, end, num, original, reversed, temp, digit;

    int startarm, endarm, number, originalarm, rem, reu;

    printf("==============================\n");
    printf("Enter your option\n");
    printf("1) for string\n");
    printf("2) for number\n");
    printf("3) for exit\n");
    printf("Enter here: ");
    scanf("%d", &option_1);
    printf("==============================\n");

    switch(option_1) {
        
        case 1:
            printf("==============================\n");
            printf("Enter your option\n");
            printf("1) for reverse string\n");
            printf("2) for whether check string is palindrome or not\n");
            printf("Enter here: ");
            scanf("%d", &option_2);
            printf("==============================\n");

            switch(option_2) {
                
                case 1:
                    printf("Enter string: ");
                    scanf("%s", str);  // ? FIXED: Removed &
                    strrev(str);      // Works in Turbo C only
                    puts(str);
                    break;

                case 2:
                    printf("Enter string: ");
                    scanf("%s", str); // ? FIXED input
                    len = strlen(str);
                    is_peli = 1;     // ? Reset before using

                    for(i = 0; i < len / 2; i++) {
                        if(str[i] != str[len - i - 1]) {
                            is_peli = 0;
                            break;
                        }
                    }

                    if(is_peli == 1) {
                        printf("Given string is palindrome\n");
                    } else {
                        printf("Given string is not palindrome\n");
                    }
                    break;
            }
            break;

        case 2:
            printf("==============================\n");
            printf("Enter your option\n");
            printf("1) for check either number is palindrome or not\n");
            printf("2) for check either number is armstrong or not\n");
            printf("Enter here: ");
            scanf("%d", &option_3);
            printf("==============================\n");

            switch(option_3) {
                
                case 1:
                    printf("Enter start of range: ");
                    scanf("%d", &start);
                    printf("Enter end of range: ");
                    scanf("%d", &end);
                    printf("Palindrome series between %d and %d:\n", start, end);

                    for(num = start; num <= end; num++) {
                        original = num;
                        reversed = 0;
                        temp = num;

                        while(temp != 0) {
                            digit = temp % 10;
                            reversed = reversed * 10 + digit;
                            temp = temp / 10;
                        }

                        if(original == reversed) {
                            printf("%d ", original);
                        }
                    }
                    break;

                case 2:
                    printf("Enter start of range: ");
                    scanf("%d", &startarm);
                    printf("Enter end of range: ");
                    scanf("%d", &endarm);

                    for(number = startarm; number <= endarm; number++) {
                        originalarm = number;
                        reu = 0;

                        while(originalarm != 0) {
                            rem = originalarm % 10;
                            reu += rem * rem * rem;
                            originalarm /= 10;
                        }

                        if(reu == number) {
                            printf("%d ", number);
                        }
                    }
                    break;
            }
            break;

        case 3:
            printf("\nExiting ......");
            break;
    }
    return 0;
}

