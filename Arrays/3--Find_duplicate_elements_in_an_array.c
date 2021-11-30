// Write a program in C to find duplicate elements in an array
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    float numbers[] = {
        10, 20, 30, 30, 40, 50,
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    float duplicate_number;
    srand(time(0));
    duplicate_number = rand() % 100 + 1;
    float not_found = duplicate_number;

    for (int i = 0; i < len_arr; i++) {
        for (int j = 0; j < len_arr; j++) {
            if (i == j) {
                continue;
            }
            else if (numbers[i] == numbers[j]) {
                duplicate_number = numbers[i];
                break;
            }
        }
    }

    if (not_found == duplicate_number) {
        printf("Duplicate number not found");
    }
    else {
        printf("The Duplicate number is : %f", duplicate_number);

    }

    return 0;
}