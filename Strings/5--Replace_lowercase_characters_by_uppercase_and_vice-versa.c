// Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa

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

    for (int i = 0; i < str_len; i++) {
        if ((int) user_input[i] >= 65 && (int) user_input[i] <= 90) {
            user_input[i] = (char) ((int) user_input[i] + 32);
        }
        else if ((int) user_input[i] >= 97 && (int) user_input[i] <= 122) {
            user_input[i] = (char) ((int) user_input[i] - 32);
        }
        else {
            user_input[i] = user_input[i];
        }
    }

    printf("\nConverted String : \n");
    puts(user_input);

    return 0;
}