// Write a c program to check whether a given number is a perfect number or not

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int user_input;
    int sum = 0;

    printf("Enter the Number : ");
    scanf("%d", &user_input);

    printf("The Positive Divisors : ");
    for (int i = 1; i < user_input; i++) {
        if (user_input % i == 0) {
            printf("%d, ", i);
            sum += i;
        }
    }

    printf("\nThe Sum of the Positive Divisors : %d", sum);

    (user_input == sum) ? printf("\nYes, the Number is Perfect !!!") : printf("\nNo, the Number is NOT Perfect !!!");

    return 0;
}