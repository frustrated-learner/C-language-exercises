// Write a program in C to make such a pattern like a pyramid with numbers increased by 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int pyramid_lines;
    int starting_num = 1;
    printf("Enter the Number of the Pyramid Lines : ");
    scanf("%d", &pyramid_lines);
    printf("\nThe number Pyramid =>\n");

    int blank_spaces = pyramid_lines - 2;

    for (int i = 1; i <= pyramid_lines; i++) { // Line Printer Loop
        for (int k = blank_spaces; k >= 0; k--) { // Blank Spaces Printer loop
            printf(" ");
        }
        blank_spaces--;

        for (int j = 1; j <= i; j++) { // Pyramid Numbers Printer Loop
            printf("%d ", starting_num);
            starting_num++;
        }
        printf("\n");
        
    }

    return 0;
}