// enum fruit_t.c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef enum fruit_t {
    FRUIT_APPLE = 0,
    FRUIT_ORANGE,
    FRUIT_BANANA,
    FRUIT_PEAR,
    FRUIT_GRAPE,
    FRUIT_COUNT
} fruit_t;

static const char *fruit_names[FRUIT_COUNT] = {
    "apple",
    "orange",
    "banana",
    "pear",
    "grape"
};

const char *fruit_to_string(fruit_t f) {
    return (f >= 0 && f < FRUIT_COUNT) ? fruit_names[f] : "unknown";
}

bool fruit_from_string(const char *s, fruit_t *out) {
    if (!s) return false;
    for (int i = 0; i < FRUIT_COUNT; ++i) {
        if (strcmp(s, fruit_names[i]) == 0) {
            if (out) *out = (fruit_t)i;
            return true;
        }
    }
    return false;
}

int main(void) {
    // Print all fruits
    for (int i = 0; i < FRUIT_COUNT; ++i) {
        printf("%d: %s\n", i, fruit_to_string((fruit_t)i));
    }

    // Parse from string
    const char *s = "banana";
    fruit_t f;
    if (fruit_from_string(s, &f)) {
        printf("Parsed \"%s\" -> enum value %d\n", s, f);
    } else {
        printf("Unknown fruit: %s\n", s);
    }

    // Use in a switch
    switch (f) {
        case FRUIT_APPLE:  puts("Apple is crunchy."); break;
        case FRUIT_ORANGE: puts("Orange is citrus."); break;
        case FRUIT_BANANA: puts("Banana is soft."); break;
        case FRUIT_PEAR:   puts("Pear is juicy."); break;
        case FRUIT_GRAPE:  puts("Grape is small."); break;
        default:           puts("Unknown fruit."); break;
    }

    return 0;
}