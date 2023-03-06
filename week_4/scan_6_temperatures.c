// Nicole, Week 4 23T1
// Tutorial demo code

#include <stdio.h>

#define SIZE 6

int main(void) {

    // scan 6 temperatures into an array
    int temp_array[SIZE] = {0};
    int i = 0;
    while (i < SIZE) {
        int temperature;
        scanf("%d", &temperature);
        temp_array[i] = temperature;
        i++;
    }

    // create a variable to keep track of the highest value
    // set it to the first value in the array
    int max_temp = temp_array[0];

    // loop through the array
    i = 0;
    while (i < SIZE) {
        int current_array_temp = temp_array[i];
        // if current value is greater than the max value
        if (current_array_temp > max_temp) {
            // current value will be the new max value
            max_temp = current_array_temp;
        }
        i++;
    }

    printf("Max temp is %d\n", max_temp);

    return 0;
}