// Write a Program to Find missing numbers in an array.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    int numbers[] = {
        1, 2, 3, 5, 6, 8, 9, 10, 12, 13, 14, 16
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);

    printf("The Missing numbers are : ");

    for (int i = 0; i < (len_arr - 1); i++) {
        if ((numbers[i] + 1) != numbers[i + 1]) {
            printf("%d, ", (numbers[i] + 1));
        }
    }

    return 0;
}