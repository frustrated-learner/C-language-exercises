// Write a program in C to print individual characters of string in reverse order

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char user_input[50];

    printf("Enter the String to Reverse : ");
    gets(user_input);

    printf("\nThe Reversed String => \n");

    int str_len = strlen(user_input);

    for (int i = str_len; i >= 0; i--) {
        printf("%c", user_input[i]);
    }

    return 0;
}