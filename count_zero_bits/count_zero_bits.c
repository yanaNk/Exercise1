#include <stdio.h>
#include "data.h"

/*
 * Function: count_zero_bits
 * ------------------------
 *   Counts how many bits in the binary form of a number are zero
 *
 *   value: the number to check.
 *
 *   returns: number of zeroes in the binary form of the number
 */
int count_zero_bits(unit value);
/*
* Program: Checks how many zeroes are in binary form of number
* Description:
*   Checks how many zeros are in the binary form of the given number that is passed by the user .
* Input:
*   unsigned int
* Output:
*   A message with the number the user entered.
*   Then on the next line a message indicating how many zeroes are
*   in the binary form of the number
*/
int main() {
    unsigned int input_number;
    int zeroes;
    printf("Please enter a number in decimal base: ");
    scanf("%u", &input_number);
    zeroes = count_zero_bits(input_number);
    printf("The number that was entered is %u\n", input_number);
    printf("%d contains in binary form %d zeroes", input_number, zeroes);
    return 0;
}

int count_zero_bits(unit value) {
    int num_zeroes = 0;
    int i;
    for(i = 0; i < NUMBER_OF_BITS; i++)
    {
        if ((value >> i & 1) == 0)
            num_zeroes++;
    }
    return num_zeroes;
}