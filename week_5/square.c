// Nicole, Week 5 23T1
// Tutorial demo code for functions

#include <stdio.h>

int square(int x);

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    //call square, copying the value of input into `int x`
    int squared_input = square(input);

    printf("value after square: %d\n", squared_input);

    return 0;
}

int square(int x) {
    x = x * x;
    return x;
}