// Write a Function in C to Convert a String to Integer

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int str_to_int(char *the_string) {
    int len = 0, final_num = 0, pwr = 0;

    while (the_string[len] != '\0') {
        len++;
    }

    for (int i = len; i >= 0; i--) {
        if (the_string[i] >= 48 && the_string[i] <= 57) {
            final_num += (the_string[i] - 48) * round(pow(10, pwr));
            pwr++;
        }
        else {
            continue;
        }
    }

    return final_num;
}

int main(int argc, char const *argv[]) {
    printf("The Number => %d\n", str_to_int("1234567890"));
    return 0;
}