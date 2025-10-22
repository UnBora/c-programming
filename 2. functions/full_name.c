#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* full_name(char* first_name, char* last_name) {
    strcat(first_name, " ");
    strcat(first_name, last_name);
    return first_name;
}

int main(void) {
    char *name = full_name("tin", "amin");

    printf("%s\n", name); // prints: tin amin
    return 0;
}