// Write a program in C to read n number of values in an array and display it in reverse order
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Given Array
    int the_arr[] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
    };


    // Answer
    int len_arr = sizeof(the_arr) / sizeof (the_arr[0]);
    int reversed_arr[10];

    for (int i = 0; i < len_arr; i++) {
        reversed_arr[i] = the_arr[(len_arr - 1) - i];
    }

    printf("Reversed Array output : ");

    for (int i = 0; i < len_arr; i++) {
        printf("%d, ", reversed_arr[i]);
    }

    return 0;
}