// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int terms;
    int element = 0;
    int sum = 0;

    printf("Enter the number or terms : ");
    scanf("%d", &terms);
    printf("\n");

    for (int i = 0; i < terms; i++) {
        element = round(pow(10, i));
        for (int j = (i - 1); j >= 0; j--) {
            element += round(pow(10, j));
        }
        printf("%d + ", element);
        sum += element;
    }

    printf("\n\nThe Sum is : %d", sum);
    return 0;
}