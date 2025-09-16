#include <stdio.h>
int main() {
    int n = 7, i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || (i >= n/2 && j == n-1) || (i == n/2 && j >= n/2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
}

