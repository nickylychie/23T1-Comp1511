// Nicole, 23T1 Week 3
// Tutorial enums demo

#include <stdio.h>

// what are the different parts of this enum?
// enum opal_card_type is the name of this new datatype
enum opal_card_type {
    ADULT, // 0
    CONCESSION, // 1
    CHILD = 10, // 10
    STUDENT // another element to the enum
};

int main(void) {

    // create a variable to store an enum?
    // "enum opal_card_type" is the datatype
    enum opal_card_type nicoles_card = STUDENT;
    printf("my card is of type    %d\n\n", nicoles_card);

    printf("adult is of type      %d\n", ADULT);
    printf("concession is of type %d\n", CONCESSION);
    printf("child is of type      %d\n", CHILD);
    printf("student is of type    %d\n", STUDENT);
    
    return 0;
}
