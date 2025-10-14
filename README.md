# c-programming
# Escape Sequences in C

| Escape Sequence | Character Description        |
|------------------|------------------------------|
| `\b`             | Backspace                    |
| `\f`             | Form feed                    |
| `\n`             | Newline                      |
| `\r`             | Carriage return              |
| `\t`             | Horizontal tab               |
| `\v`             | Vertical tab                 |
| `\\`             | Backslash                    |
| `\'`             | Single quotation mark        |
| `\"`             | Double quotation mark        |
| `\?`             | Question mark                |
| `\0`             | Null character               |


# Format Specifiers in C

Format specifiers tell `printf()` and `scanf()` **what type of data** you want to display or input.

| Format Specifier | Meaning | Example | Example Output |
|------------------|----------|----------|----------------|
| `%d` | Integer (decimal) | `printf("%d", 10);` | `10` |
| `%i` | Integer (same as `%d`) | `printf("%i", -5);` | `-5` |
| `%c` | Single character | `printf("%c", 'A');` | `A` |
| `%s` | String (array of characters) | `printf("%s", "Hello");` | `Hello` |
| `%f` | Floating-point number (decimal) | `printf("%f", 3.14);` | `3.140000` |
| `%.2f` | Floating-point with 2 decimal places | `printf("%.2f", 3.14);` | `3.14` |
| `%lf` | Double precision floating-point | `printf("%lf", 3.14159);` | `3.141590` |
| `%u` | Unsigned integer (only positive) | `printf("%u", 25);` | `25` |
| `%ld` | Long integer | `printf("%ld", 1234567890L);` | `1234567890` |
| `%lld` | Long long integer | `printf("%lld", 1234567890123LL);` | `1234567890123` |
| `%x` | Hexadecimal (lowercase) | `printf("%x", 255);` | `ff` |
| `%X` | Hexadecimal (uppercase) | `printf("%X", 255);` | `FF` |
| `%o` | Octal number | `printf("%o", 10);` | `12` |
| `%p` | Memory address (pointer) | `printf("%p", ptr);` | `0x7ffee4b7c8a0` |
| `%%` | Prints a percent sign | `printf("100%% Complete");` | `100% Complete` |

---

## 🧠 Example Program

```c
#include <stdio.h>

int main() {
    int age = 21;
    char grade = 'A';
    char name[] = "Bora";
    float height = 1.75;

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.2f meters\n", height);

    return 0;
}
