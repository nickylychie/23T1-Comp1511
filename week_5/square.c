// Nicole, Week 5 23T1
// Tutorial demo code for functions

#include <stdio.h>

void square(int x) {
    x = x * x;
}

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    //call square, copying the value of input into `int x`
    square(input);

    printf("value after square: %d\n", input);

    return 0;
}