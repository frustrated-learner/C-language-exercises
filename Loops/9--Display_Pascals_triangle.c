// Write a C program to display Pascal's triangle

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int factorial(int user_input) {
    int result = 1;

    if (user_input == 0) {
        result = 1;
    }
    else {
        for (int i = user_input; i >= 1; i--) {
            result *= i;
        }
    }
    return result;
}

int main() {
    int k = 0, user_input, element;

    printf("How many rows do you want in the Pascals Triangle ? : ");
    scanf("%d", &user_input);

    int blank_spaces = user_input - 2;

    for (int n = 0; n < user_input; n++) {
        for (int i = blank_spaces; i >= 0; i--) { // Loop to Print the Blank Spaces
            printf(" ");
        }
        blank_spaces--;

        for (int k = 0; k <= n; k++) { // Loop to Print the Pascal's Numbers
            element = factorial(n) / (factorial(n - k) * factorial(k));
            printf("%d ", element);
        }
        printf("\n");
    }

    return 0;
}