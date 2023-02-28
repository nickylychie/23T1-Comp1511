// Nicole, 23T1 Week 3
// Tutorial structs demo

#include <stdio.h>

// what are the different parts of this struct?
struct person {
    double height;
    char first_name_initial;
    int fav_number;
};

int main(void) {

    // initialise struct person
    struct person nicole;
    // initialise the values inside the struct person you 
    // just created
    nicole.height = 200;
    nicole.first_name_initial = 'n';
    nicole.fav_number = 12;

    // print a struct person
    printf("my height is %.2lf, first name initial is %c," 
            "and fav number is %d\n", nicole.height, 
            nicole.first_name_initial, nicole.fav_number);

    return 0;
}