// Nicole, Week 5 23T1
// Tutorial demo code for arrays

#include <stdio.h>

#define MAX_SIZE 100

int square(int x);
void print_array(int length, int array[length]);
/*
Finish this prototype:
square_array()
    - takes in an array of size length
    - squares all the elements inside the array
*/
void square_array(int length, array[length]);

int main(void) {

    int inputs[MAX_SIZE];

    // Ask for array size
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    // scanning in a given number of integers
    printf("Enter %d integers\n", size);
    for (int i = 0; i < size; i++) {
        int input;
        scanf("%d", &input);
        inputs[i] = input;
    }

    // values of original array
    printf("Values before square_array: ");
    print_array(size, inputs);

    // square everything
    square_array(size, inputs);

    // values after squaring
    printf("Values after square_array:  ");
    print_array(size, inputs);

    return 0;
}

// Returns the square of a given integer.
int square(int x) {
    return x * x;
}

void print_array(int length, int array[length]) {
    int i = 0;
    printf("[ ");
    while (i < length) {
        printf("%d ", array[i]);
        i++;
    }
    printf("]\n");
}

// Squares all elements of an array, modifying the array in the process.
void square_array(int length, int inputs[MAX_SIZE]) {

    int i = 0;
    while (i < length) {
        inputs[i] = square(inputs[i]);
        i++;
    }

}

