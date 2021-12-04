// Write to Program to Calculate the Multiplication of 2 Matrices
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Arrays 
    int arr_1[3][3] = {
        {2, 2, -3},
        {5, 0, 2},
        {2, -1, 1},
    };
    
    int arr_2[3][3] = {
        {3, -1, 2},
        {4, 2, 5},
        {1, -3, -4},
    };

    // Answer 

    int row = sizeof(arr_1) / sizeof (arr_1[0]);
    int column = sizeof(arr_2[0]) / sizeof (arr_2[0][0]);

    int answer[row][column];

    if (row == column) {
        printf("The Result is => \n\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                answer[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    answer[i][j] += arr_1[i][k] * arr_2[k][j];
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            printf("{");
            for (int j = 0; j < 3; j++) {
                printf("%d,", answer[i][j]);
            }
            printf("},\n");
        }
        printf("\n");
    }
    else {
        printf("Math Error !!!");
    }

    return 0;
}