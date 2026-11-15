// write a program to find fibbonacci series using repeative and itterutive method
#include <stdio.h>

int main() {
    int N;
    // Use unsigned long long to prevent early integer overflow
    unsigned long long t1 = 0, t2 = 1, nextTerm;
    int count = 1;

    printf("Enter the number of terms N: ");
    if (scanf("%d", &N) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (N <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Fibonacci Series up to %d terms:\n", N);

        do {
            printf("%llu ", t1); 
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            count++;
        } while (count <= N);

        printf("\n");
    }

    return 0;
}
