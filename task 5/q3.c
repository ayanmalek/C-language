#include <stdio.h>

int main() {
    int rows, cols,i,j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[50][50], b[50][50];

    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            b[j][i] = a[i][j];
        }
    }

    
    printf("\nOriginal Matrix:\n");
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
    printf("\nTranspose Matrix:\n");
    for ( i = 0; i < cols; i++) {
        for ( j = 0; j < rows; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

