// Nicole, Wek 2 23T1
// tut demo

#include <stdio.h>

// This is a procedure.
// the first 'void' tells the compiler this returns nothing/void
// The second '(void)' tells the compiler ths takes in nothing/void
void a_is_greater_error(void) {
    printf("a canno be greater ERRORRRR\n");
}

int main(void) {

    // make 2 variables
    int a;
    int b;
    // scan in 2 integers
    scanf("%d %d", &a, &b);
    // if b is 0, print out another error message
    if (b == 0) {
        printf("ANOTHER ERROR\n");
    }
    // if a < b
    else if (a > b) {
    //  print out error message using a procedure
        // When the program gets here, it goes to find the procedure 
        // named "a_is_greater_error()" and runs the code in there
        a_is_greater_error();
    }
    // if b > a, print a/b and a*10 / b*1.0
    else {
        printf("%d %lf\n", a/b, (a*1.0) / (b*1.0));
    }

    return 0;
}

