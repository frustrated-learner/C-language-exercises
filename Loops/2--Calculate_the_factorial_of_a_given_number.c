// Write a C program to calculate the factorial of a given number

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int user_input;
    int factorial = 1;

    printf("Enter the Number you want the Factorial of : ");
    scanf("%d", &user_input);

    if (user_input == 0) {
        printf("The Factorial of %d is => %d\n", user_input, factorial);

    } else if (user_input < 0){
        printf("Math Error !!!\n");
        
    } else {
        for (int i = user_input; i >= 1; i--) {
            factorial *= i;
        }
        printf("The Factorial of %d is => %d\n", user_input, factorial);
    }
    return 0;
}