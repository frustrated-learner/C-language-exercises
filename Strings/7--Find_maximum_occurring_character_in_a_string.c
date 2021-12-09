// Write a program in C to find maximum occurring character in a string

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char user_input[50];

    printf("Enter the String : ");
    gets(user_input);

    int str_len = strlen(user_input);
    int most_frequent = 1;
    char most_occuring_char;
    int count = 1;

    for (int i = 0; i < str_len; i++) {
        for (int j = 0; j < str_len; j++) {
            if (user_input[i] == user_input[j]) {
                if (i == j) {
                    continue;
                }
                count++;
            }
        }
        if (count > most_frequent) {
            most_frequent = count;
            most_occuring_char = user_input[i];
        }
        count = 1;
    }

    printf("\nThe Most frequent Character in the String is \"%c\",\n", most_occuring_char);
    printf("Occuring %d times.", most_frequent);

    return 0;
}