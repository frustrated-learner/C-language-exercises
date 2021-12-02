// Find the sum of all diagonal elements of a matrix
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Given Array 
    int numbers[6][6] = {
        {132,232,334,43,57,326},
        {700,843,934,1021,11009,1221},
        {13,160,1523,1632,172,182},
        {1943,2032,2112,223,7322,62422},
        {2500,2326,2721,2823,2922,30221},
        {3231,3112,3123,9034,10035,33226},  
    };

    // Answer
    int len_arr = sizeof(numbers) / sizeof (numbers[0]);
    int sum_45_degree = 0;
    int sum_135_degree = 0;

    for (int i = 0; i < len_arr; i++) {
        for (int j = 0; j < len_arr; j++) {
            if (i + j == (len_arr - 1)) {
                sum_45_degree += numbers[i][j];
            }
        }
    }

    for (int i = 0; i < len_arr; i++) {
        sum_135_degree += numbers[i][i];
    }

    printf("The Sum of 45 Degree Angled Diagonal / = %d\n", sum_45_degree);
    printf("The Sum of 135 Degree Angled Diagonal \\ = %d\n", sum_135_degree);
    return 0;
}