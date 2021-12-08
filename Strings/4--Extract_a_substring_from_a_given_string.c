// Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char string[50];
    int start, end;

    printf("Enter the String : ");
    gets(string);

    printf("Enter the Starting Position : ");
    scanf("%d", &start);

    printf("Enter the Ending Position : ");
    scanf("%d", &end);

    int subString_len = (end - start + 2), sub_string_pos = 0;
    char sub_string[subString_len];

    for (int i = start; i <= end; i++) {
        sub_string[sub_string_pos] = string[i];
        sub_string_pos++;
    }
    sub_string[subString_len - 1] = '\0';

    printf("\nThe Sub String is : ");
    puts(sub_string);

    return 0;
}