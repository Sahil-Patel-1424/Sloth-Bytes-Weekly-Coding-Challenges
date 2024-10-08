#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void countTrue(bool *array, int array_length) {
    // counter
    int count_true = 0;

    // go through the array and count how many true statements there are
    for (int i = 0; i < array_length; i++) {
        if (array[i] == true) {
            count_true++;
        }
    }

    // print the result
    printf("%d\n", count_true);

    return;
}

int main(void) {
    bool array[] = {true, false, false, true, false};
    countTrue(array, 5);

    bool array1[] = {false, false, false, false};
    countTrue(array1, 4);

    bool array2[] = {};
    countTrue(array2, 0);
}