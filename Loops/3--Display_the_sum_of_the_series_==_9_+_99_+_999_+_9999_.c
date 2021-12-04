// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int terms;
    int element;
    int sum = 0;

    printf("Enter the number or terms : ");
    scanf("%d", &terms);
    printf("\n");

    for (int i = 1; i <= terms; i++) { // Loop to Diplay the Series
        element = round((pow(10, i) - 1));
        printf("%d + ", element);
    }


    for (int i = 1; i <= terms; i++) { // Loop to Diplay the Sum
        element = round((pow(10, i) - 1));
        sum += element;
    }

    printf("\n\nThe Sum is : %d", sum);
    
    return 0;
}