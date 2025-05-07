/* count_zero_bits.h file
* Description: definitions relevant for the program
* number of bits -  number of bits in an unsigned int
* unit - alias of unsigned int
*/

typedef unsigned int uint;
#define NUMBER_BITS_IN_BYTE 8
#define NUMBER_OF_BITS (sizeof(unsigned int) * NUMBER_BITS_IN_BYTE)

/*
 * Function: count_zero_bits
 * ------------------------
 *   Counts how many bits in the binary form of a number are zero
 *
 *   value: the number to check.
 *
 *   returns: number of zeroes in the binary form of the number
 */
int count_zero_bits(uint value);