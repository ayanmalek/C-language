#include <stdio.h>

int main() {
    int a, b;
    float x, y;
    double p, q;
    long m, n;

    // Input for int
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Input for float
    printf("Enter two float numbers: ");
    scanf("%f %f", &x, &y);

    // Input for double
    printf("Enter two double numbers: ");
    scanf("%lf %lf", &p, &q);

    // Input for long
    printf("Enter two long integers: ");
    scanf("%ld %ld", &m, &n);

    printf("\n===== Integer Operations =====\n");
    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division       : %d\n", a / b);
    printf("Modulo         : %d\n", a % b);

    printf("\n===== Float Operations =====\n");
    printf("Addition       : %.2f\n", x + y);
    printf("Subtraction    : %.2f\n", x - y);
    printf("Multiplication : %.2f\n", x * y);
    printf("Division       : %.2f\n", x / y);
    // Modulo not allowed for float in C

    printf("\n===== Double Operations =====\n");
    printf("Addition       : %.4lf\n", p + q);
    printf("Subtraction    : %.4lf\n", p - q);
    printf("Multiplication : %.4lf\n", p * q);
    printf("Division       : %.4lf\n", p / q);
    // Modulo not allowed for double in C

    printf("\n===== Long Integer Operations =====\n");
    printf("Addition       : %ld\n", m + n);
    printf("Subtraction    : %ld\n", m - n);
    printf("Multiplication : %ld\n", m * n);
    printf("Division       : %ld\n", m / n);
    printf("Modulo         : %ld\n", m % n);

    return 0;
}

