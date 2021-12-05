// Write a program in C to print the Fibonacci number series to N times

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int times;
    int num1 = 0;
    int num2 = 1;
    int num3 = (num1 + num2);

    printf("Enter the Number how many times you want to print : ");
    scanf("%d", &times);
    printf("\n");

    for (int i = 0; i < times; i++) {
        printf("%d, ", num1);
        num1 = num2;
        num2 = num3;
        num3 = (num1 + num2);
    }

    return 0;
}