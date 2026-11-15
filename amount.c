#include <stdio.h>

int main() {
    float P, R, T, SI, Total;

    printf("Enter Principal (P): ");
    scanf("%f", &P);

    printf("Enter Rate (R): ");
    scanf("%f", &R);

    printf("Enter Time in years (T): ");
    scanf("%f", &T);

    SI = (P * R * T) / 100;
    Total = P + SI;

    printf("Simple Interest = %.2f\n", SI);
    printf("Total Amount = %.2f\n", Total);

    return 0;
}