//Write a Program to find the transpose of a matrix
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    int numbers[3][3] = {
        {31, 20, 36},
        {49, 55, 63},
        {1007, 843, 93},
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    int transposed_matrix[len_arr][len_arr];

    for (int i = 0; i < len_arr; i++) {
        for (int j = 0; j < len_arr; j++) {
            transposed_matrix[i][j] = numbers[j][i];
        }
    }

    printf("The Transposed matrix is => \n\n");

    for (int i = 0; i < len_arr; i++) {
        printf("{ ");
        for (int j = 0; j < len_arr; j++) {
            printf("%d, ", transposed_matrix[i][j]);
        }
        printf("},\n");
    }
    return 0;
}