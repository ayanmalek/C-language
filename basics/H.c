#include <stdio.h>
int main() {
    int n = 7, i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == n / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

