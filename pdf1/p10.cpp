#include <stdio.h>

int main() {
    char letters[] = {'A', 'H', 'O', 'V', 'A', 'H'};
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", letters[j]);
        }
        printf("\n");
    }

    return 0;
}

