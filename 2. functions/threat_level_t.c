// threat_level_t.c
// Example of using an enum for threat levels in C.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    THREAT_NONE = 0,
    THREAT_LOW,
    THREAT_MEDIUM,
    THREAT_HIGH,
    THREAT_CRITICAL,
    THREAT_COUNT
} threat_level_t;

static const char *threat_level_names[THREAT_COUNT] = {
    "NONE",
    "LOW",
    "MEDIUM",
    "HIGH",
    "CRITICAL"
};

const char *threat_level_to_string(threat_level_t t) {
    if (t >= 0 && t < THREAT_COUNT) return threat_level_names[t];
    return "UNKNOWN";
}

/* case-insensitive equality for small strings */
static int iequals(const char *a, const char *b) {
    while (*a && *b) {
        unsigned char ca = (unsigned char) tolower((unsigned char)*a);
        unsigned char cb = (unsigned char) tolower((unsigned char)*b);
        if (ca != cb) return ca - cb;
        a++; b++;
    }
    return (unsigned char)*a - (unsigned char)*b;
}

threat_level_t threat_level_from_string(const char *s) {
    if (!s) return THREAT_NONE;
    for (int i = 0; i < THREAT_COUNT; ++i) {
        if (iequals(s, threat_level_names[i])) return (threat_level_t)i;
    }
    return THREAT_NONE;
}

threat_level_t escalate(threat_level_t t) {
    if (t < THREAT_CRITICAL) return (threat_level_t)(t + 1);
    return THREAT_CRITICAL;
}

threat_level_t deescalate(threat_level_t t) {
    if (t > THREAT_NONE) return (threat_level_t)(t - 1);
    return THREAT_NONE;
}

/* Example: set threat based on a numeric severity score (0..100) */
threat_level_t threat_from_score(int score) {
    if (score <= 0) return THREAT_NONE;
    if (score <= 25) return THREAT_LOW;
    if (score <= 50) return THREAT_MEDIUM;
    if (score <= 80) return THREAT_HIGH;
    return THREAT_CRITICAL;
}

int main(void) {
    threat_level_t t = THREAT_MEDIUM;
    printf("Current: %s\n", threat_level_to_string(t));

    t = escalate(t);
    printf("After escalate: %s\n", threat_level_to_string(t));

    t = deescalate(t);
    printf("After deescalate: %s\n", threat_level_to_string(t));

    const char *input = "critical";
    threat_level_t parsed = threat_level_from_string(input);
    printf("Parsed \"%s\" -> %s\n", input, threat_level_to_string(parsed));

    int scores[] = {0, 10, 30, 60, 95};
    for (size_t i = 0; i < sizeof(scores)/sizeof(scores[0]); ++i) {
        threat_level_t from_score = threat_from_score(scores[i]);
        printf("Score %3d -> %s\n", scores[i], threat_level_to_string(from_score));
    }

    return 0;
}