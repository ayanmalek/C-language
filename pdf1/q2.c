#include <stdio.h>
#include <math.h>   // for pow()

int main() {
    double a, b, result;

    // Input values
    printf("Enter value of a: ");
    scanf("%lf", &a);

    printf("Enter value of b: ");
    scanf("%lf", &b);

    // Compute expression
    result = pow(a, 5) + pow(b, 4) * pow((pow(a, 2) / pow(b, 2) - b * a * b), 2);

    // Display result
    printf("\nResult of expression a^5 + b^4 * (a^2 / b^2 - bab)^2 = %.4lf\n", result);

    return 0;
}

