// Write a program in C to display the pattern like a diamond

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int user_input;
    int loop_1_lines;
    int loop_2_lines;


    printf("How many Lines do you want the Diamond to be (Odd Number Recommended) ? : ");
    scanf("%d", &user_input);

    printf("\nThe Asterisks Diamond => \n");

    if (user_input % 2 != 0) {
        loop_1_lines = (user_input / 2) + 1;
        loop_2_lines = (user_input / 2);
    }
    else {
        loop_1_lines = (user_input / 2);
        loop_2_lines = loop_1_lines;        
    }

    int loop_1_blank_space = loop_1_lines - 2;
    int loop_2_blank_space = 1;

    // Loop 1 for Straight Pyramid
    for (int i = 1; i <= loop_1_lines; i++) {
        for (int k = loop_1_blank_space; k >= 0; k--) { // Loop for Printing Blank Spaces
            printf(" ");
        }
        loop_1_blank_space--;

        for (int j = 0; j < i; j++) { // Loop for Printing the Asterisks
            printf("* ");
        }
        printf("\n");
    }

    // Loop 2 for Reversed Pyramid
    for (int i = loop_2_lines; i >= 0; i--) {
        for (int k = 0; k < loop_2_blank_space; k++) { // Loop for Printing Blank Spaces
            printf(" ");
        }
        loop_2_blank_space++;

        for (int j = 0; j < i; j++) { // Loop for Printing the Asterisks
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
