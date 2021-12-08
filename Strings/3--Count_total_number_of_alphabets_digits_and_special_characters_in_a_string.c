// Write a program in C to count total number of alphabets, digits and special characters in a string

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char user_input[50];

    printf("Enter the String : ");
    gets(user_input);

    int alphabets = 0, digits = 0, s_chars = 0;
    int str_len = strlen(user_input);

    for (int i = 0; i <= str_len; i++) {
        
        // Special Characters Counter
        if ( (int) user_input[i] >= 0 && (int) user_input[i] <= 47) { 
            s_chars++;
        }
        else if ( (int) user_input[i] >= 58 && (int) user_input[i] <= 64) {
            s_chars++;
        }
        else if ( (int) user_input[i] >= 91 && (int) user_input[i] <= 96) {
            s_chars++;
        }
        else if ( (int) user_input[i] >= 123 && (int) user_input[i] <= 255) {
            s_chars++;
        }


        // Digit Counter
        else if ( (int) user_input[i] >= 48 && (int) user_input[i] <= 57) {
            digits++;
        }


        // Alphabet Counter
        else if ( (int) user_input[i] >= 65 && (int) user_input[i] <= 90) {
            alphabets++;
        }
        else if ( (int) user_input[i] >= 97 && (int) user_input[i] <= 122) {
            alphabets++;
        }
    }

    printf("\nYour string \"%s\" contains...\n", user_input);
    printf("%d Alphabets\n", alphabets);
    printf("%d Digits\n", digits);
    printf("%d Special Characters\n", s_chars);
    

    return 0;
}