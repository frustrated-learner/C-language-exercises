// Write a Program to find addition of two matrices
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Arrays
    int numbers[2][2] = {
        {34, 56},
        {90, 100},
    };

    float d_numbers[2][2] = {
        {3.1416, 2.7281},
        {65.43, 8.6445},
    };

    // Answer
    float sum[2][2] = {
        {0, 0},
        {0, 0},
    };

    int len_arr1 = sizeof(numbers) / sizeof (numbers[0]);
    int len_arr2 = sizeof(numbers) / sizeof (numbers[0]);

    for (int i = 0; i < len_arr1; i++) {
        for (int j = 0; j < len_arr2; j++) {
            sum[i][j] = (float) numbers[i][j] + d_numbers[i][j];
        }
    }

    printf("The sum of the 2 Matrixes are => \n\n");

    for (int i = 0; i < len_arr1; i++) {
        printf("{ ");
        for (int j = 0; j < len_arr2; j++) {
            printf("%f, ", sum[i][j]);
        }
        printf("},\n");

    }

    return 0;
}