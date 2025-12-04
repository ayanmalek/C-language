#include <stdio.h>

int main() {
    int i, j,n=5;

   
    for(i = 1; i <= n; i++) {

        
        if(i == 1 || i == 3) {
            for(j = 1; j <= n+1; j++)
                printf("* ");
        }

        
        else if(i == 2) {
            printf("*");      
            for(j = 1; j <= n+4; j++)
                printf(" ");
            printf("*");
        }

        
        else {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

