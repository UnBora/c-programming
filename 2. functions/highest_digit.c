#include <stdio.h>

int highest_digit(int num) {
    int max = 0;
    while (num > 0) {
        int digit = num % 10;  // យកខ្ទង់ចុងក្រោយ
        if (digit > max) {
            max = digit;        // ប្រសិនបើខ្ទង់នេះធំជាង max → update
        }
        num = num / 10;         // ដកខ្ទង់ចុងក្រោយចេញ
    }
    return max;                 // ត្រឡប់ខ្ទង់ធំជាងគេ
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Highest digit = %d\n", highest_digit(n));
    return 0;
}
