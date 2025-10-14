#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers to add (enter 0 to stop):\n");

start:
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        goto end;

    sum += num;
    goto start;

end:
    printf("Sum = %d\n", sum);

    return 0;
}