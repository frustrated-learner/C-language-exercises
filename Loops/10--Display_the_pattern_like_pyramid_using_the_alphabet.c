// Write a C Program to display the pattern like pyramid using the alphabet
// Example :
//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int pyramid_lines, char_ascii_value = 65;

    printf("Now Many lines do you want in the Pyramid ? : ");
    scanf("%d", &pyramid_lines);

    int blank_spaces = (pyramid_lines - 2);

    for (int i = 0; i < pyramid_lines; i++) { // Pyramid Line Printer loop

        for (int l = blank_spaces; l >= 0; l--) { // Blank space printer
            printf("  ");
        }
        blank_spaces--;

        for (int j = 0; j <= i; j++) { // Incrementing ASCII Value Printer
            printf("%c ", char_ascii_value);
            char_ascii_value++;
        }

        char_ascii_value--;
        for (int k = i; k > 0; k--) { // Decrementing ASCII Value Printer
            char_ascii_value--;
            printf("%c ", char_ascii_value);
        }

        char_ascii_value = 65;
        printf("\n");
    }

    return 0;
}