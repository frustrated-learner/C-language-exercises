// Write a program in C to find the sum of all elements of the array
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    float numbers[] = {
        3.141592,
        2.718281,
        1.618033,
        16,
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    float sum = 0;

    for (int i = 0; i < len_arr; i++) {
        sum += numbers[i];
    }

    printf("The sum of the Numbers are : %f", sum);

    return 0;
}