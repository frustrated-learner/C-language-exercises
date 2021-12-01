// Write a program in C to print all unique elements in an array
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array
    int numbers[] = {
        1, 2, 2, 3, 4
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    int same_num_count = 0;
    int same_num_index[same_num_count];

    
    for (int i = 0; i < len_arr; i++) {
        for (int j = 0; j < len_arr; j++) {
            if (i == j) {
                continue;
            }
            else if (numbers[i] == numbers[j]) {
                same_num_count++;
                same_num_index[same_num_count - 1] = i;
                break;
            }
        }
    }

    if (same_num_count == 0) {
        printf("All the Numbers in the Array are Unique.");
    }
    else {
        printf("All the Unique Numbers are : ");
        for (int i = 0; i < len_arr; i++) {
            for (int j = 0; j <= same_num_count; j++) {
                if (i == same_num_index[j]) {
                    i++;
                    continue;
                }
                printf("%d, ", numbers[i]);
                break;
            }
        }
    }
    return 0;
}