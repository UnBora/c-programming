#include <stdio.h>
#include <stdlib.h>

unsigned long long sum_n(unsigned int n) {
    if (n == 0) return 0;
    return n + sum_n(n - 1);
}

int main(void) {
    unsigned int n;
    unsigned long long result;

    printf("Enter a non-negative integer: ");
    if (scanf("%u", &n) != 1) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    result = sum_n(n);
    printf("Sum of first %u natural numbers = %llu\n", n, result);
    return EXIT_SUCCESS;
}