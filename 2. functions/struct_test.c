#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    double height_m;
} Person;

void print_person(const Person *p) {
    printf("Name: %s, Age: %d, Height: %.2fm\n", p->name, p->age, p->height_m);
}

/* increment age via pointer (modifies original) */
void have_birthday(Person *p) {
    p->age += 1;
}

/* attempt to increment age by value (does NOT modify original) */
void try_birthday_by_value(Person p) {
    p.age += 1;
}

/* helper to create a Person and return by value */
Person make_person(const char *name, int age, double height_m) {
    Person p;
    strncpy(p.name, name, sizeof(p.name) - 1);
    p.name[sizeof(p.name) - 1] = '\0';
    p.age = age;
    p.height_m = height_m;
    return p;
}

int main(void) {
    Person alice = make_person("Alice", 30, 1.68);
    print_person(&alice);

    have_birthday(&alice);
    printf("After birthday (by pointer):\n");
    print_person(&alice);

    try_birthday_by_value(alice);
    printf("After try_birthday_by_value (by value):\n");
    print_person(&alice); /* unchanged */

    /* array of structs */
    Person team[2];
    team[0] = make_person("Bob", 25, 1.75);
    team[1] = make_person("Carol", 28, 1.62);

    printf("\nTeam members:\n");
    for (int i = 0; i < 2; ++i) {
        print_person(&team[i]);
    }

    return 0;
}