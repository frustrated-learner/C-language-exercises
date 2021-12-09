// Write a program in C to remove characters in String Except Alphabets

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

    printf("\nAfter removing, the Output String : ");

    for (int i = 0; i < str_len; i++) {
        if (((int) user_input[i] >= 65 && (int) user_input[i] <= 90) || ((int) user_input[i] >= 97 && (int) user_input[i] <= 122)) {
            printf("%c", user_input[i]);
        }
    }

    return 0;
}