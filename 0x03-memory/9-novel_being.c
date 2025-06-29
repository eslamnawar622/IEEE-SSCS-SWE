#include <stdio.h>

typedef struct {
    char *name;
    int age;
    int energy_level;
} Being;

void print_being(Being  *b)
{
    printf("name: %s, Age: %d, Energy: %d\n", b->name, b->age, b->energy_level);
}


int main()
{
    Being b = {"sadio", 1, 25};
    print_being(&b);
    return 0;
}
