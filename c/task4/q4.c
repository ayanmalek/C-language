#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;

    for(i = 1; i <= n; i++) {
       
        for(j = 1; j < i; j++) {
            printf("  ");  
        }

        
        for(k = i; k <= n; k++) {
            if(k % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }

        printf("\n");
    }

    return 0;
}

