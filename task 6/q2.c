#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, length = 0, flag = 0;
    int freq[256] = {0};     

    printf("Enter a string: ");
    gets(str);   

    
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    
    for (i = 0; i < length; i++) {
        freq[(int)str[i]]++;
    }

    
    if (flag == 0) {
        printf("\nThe string is a Palindrome\n");
    } else {
        printf("\nThe string is NOT a Palindrome\n");
    }

  
    printf("\nCharacter Frequency:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}

