// Write a program in C to find the length of a string without using library function

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int my_str_len_func(char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        i++;
    }

    return i;
}


int main() {
    char user_input[50];

    printf("Enter the String : ");
    gets(user_input);

    int str_len = my_str_len_func(user_input);

    printf("The length of the String you entered is => %d", str_len);

    return 0;
}