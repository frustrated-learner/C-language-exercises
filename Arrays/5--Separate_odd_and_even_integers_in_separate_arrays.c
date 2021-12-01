// Write a program in C to separate odd and even integers in separate arrays
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    int numbers[] = {
        1,2,3,4,5,6,7,8,9,10
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    int even_arr_len = 0;
    int odd_arr_len = 0;

    for (int i = 0; i < len_arr; i++) {
        (numbers[i] % 2 == 0) ? even_arr_len++ : odd_arr_len++;
    }

    int even_arr[even_arr_len];
    int odd_arr[odd_arr_len];

    int even_index = 0;
    int odd_index = 0;

    for (int i = 0; i < len_arr; i++) {
        if (numbers[i] % 2 == 0) {
            even_arr[even_index] = numbers[i];
            even_index++;
        }
    }

    for (int i = 0; i < len_arr; i++) {
        if (numbers[i] % 2 != 0) {
            odd_arr[odd_index] = numbers[i];
            odd_index++;
        }
    }

    printf("\nThe Even Numbers are : ");
    for (int i = 0; i < even_arr_len; i++) {
        printf("%d, ", even_arr[i]);
    }


    printf("\nThe Odd Numbers are : ");
    for (int i = 0; i < odd_arr_len; i++) {
        printf("%d, ", odd_arr[i]);
    }

    return 0;
}