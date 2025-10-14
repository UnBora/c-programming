#include <stdio.h>

int main() {
    int i;

    printf("Example of break:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // Exit loop when i is 6
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("Example of continue:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}