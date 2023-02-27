// Nicole, 23T1 Week 3
// Tutorial enums demo

#include <stdio.h>

// what are the different parts of this enum?
enum opal_card_type {
    ADULT,
    CONCESSION,
    CHILD
};

int main(void) {

    printf("adult is of type      %d\n", ADULT);
    printf("concession is of type %d\n", CONCESSION);
    printf("child is of type      %d\n", CHILD);

    // can we add another element to the enum? eg. student

    // can we create a variable to store an enum?

    return 0;
}
