// Write a program in C to make such a pattern like a Box with an asterisk
// Example : 
// * * * * * *
// *         *
// *         *
// * * * * * *

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int length, width;

    printf("Enter Box Length : ");
    scanf("%d", &length);

    printf("Enter Box Width : ");
    scanf("%d", &width);

    for (int i = 0; i < length; i++) {

        for (int j = 0; j < width; j++) {

            if (i > 0 && i < length - 1) {

                if (j > 0 && j < width - 1) {
                    printf("  ");
                }
                else {
                    printf("* ");
                }

            }
            else {
                printf("* ");
            }
        }
        printf("\n");
        
    }

    return 0;
}