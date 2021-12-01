// Write a program in C to insert New value in the array
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array 
    int numbers[] = {
        1, 2, 3, 4, 5, 6, 7, 10
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    int new_value;
    int new_arr[len_arr];

    for (int i = 0; i < (len_arr); i++) {
        new_arr[i] = numbers[i];
    }

    len_arr += 1;

    printf("Enter the New Value : ");
    scanf("%d", &new_value);

    new_arr[len_arr - 1] = new_value;

    for (int i = 0; i < len_arr; i++) {
        printf("%d, ", new_arr[i]);
    }

    return 0;
}