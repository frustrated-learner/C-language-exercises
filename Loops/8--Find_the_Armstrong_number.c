// Write a C program to find the Armstrong number

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int user_input;

    printf("Enter the Number : ");
    scanf("%d", &user_input);

    int number = user_input, digits = 0, remainder, result = 0;

    while (number != 0) {
        number = (number / 10);
        digits++;
    }

    number = user_input;

    while(number != 0) {
        remainder = (number % 10);
        number = (number / 10);
        result += round(pow(remainder, digits));
    }

    if (result == user_input) {
        printf("Yes, %d is an Armstrong Number.", user_input);
    }
    else {
        printf("No, %d is not an Armstrong Number.", user_input);
    }

    return 0;
}