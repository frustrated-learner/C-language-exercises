// Write a program in C to Sum Numbers after giving the Sum Command 
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    char the_agr[] = "sum";
    int match = 1, sum = 0;

    for (int i = 0; i < 3; i++) {
        if (the_agr[i] != argv[1][i]) {
            match = 0;
            break;
        }
    }

    if (match == 1) {
        for (int j = 2; j < argc; j++) {
            sum += atoi(argv[j]);
        }
        printf("The Sum is %d\n", sum);
    }

    return 0;
}