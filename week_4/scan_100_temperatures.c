// Nicole, Week 4 23T1
// Tutorial demo code

#include <stdio.h>

#define SIZE 6

int main(void) {

    // scan temperatures into an array
    int temp_array[100] = {0};

    int temperature;

    int i = 0;
    while (scanf("%d", &temperature) == 1) {
        temp_array[i] = temperature;
        i++;
    }

    // create a variable to keep track of the highest value
    // set it to the first value in the array
    int max_temp = temp_array[0];

    // loop through the array
    int num_temperatures = i;
    i = 0;
    while (i < num_temperatures) {
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