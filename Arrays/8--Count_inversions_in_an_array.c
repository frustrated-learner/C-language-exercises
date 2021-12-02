// Write a Program to Count inversions in an array
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    int numbers[] = {
        1,2,3,5,6,8,7,9,10,11,12,14,13,15,16,17,19,18
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    int inversion = 0;

    printf("The Inversions are : ");

    for (int i = 0; i < len_arr - 1; i++) {
        if ((numbers[i] + 1) != (numbers[i + 1]) && (numbers[i] + 1) > (numbers[i + 1])) {
            printf("(%d, %d), ", (numbers[i]), (numbers[i + 1]));
            inversion++;
        }
    }

    printf("\nNumber of Inversions : %d", (inversion));

    return 0;
}