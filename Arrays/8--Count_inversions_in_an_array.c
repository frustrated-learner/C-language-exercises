// Write a Program to Count inversions in an array
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    int numbers[] = {
        1,2,3,5,4
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    int inversion = 0;

    for (int i = 0; i < len_arr - 1; i++) {
        if ((numbers[i] + 1) != (numbers[i + 1]) && (numbers[i] + 1) > (numbers[i + 1])) {
            inversion++;
        }
    }

    printf("Number of Inversions : %d", (inversion));

    return 0;
}