/* palindrome.h file
* Description: definitions relevant for the program
* size - the max number of characters allowed in the input string not including \n so 80 is the max and plus the char \n
*/

#define size 81

/*
 * Function: is_whitespace
 * ------------------------
 *   Checks whether the given character is a whitespace character.
 *
 *   character: the character to check.
 *
 *   returns: 1 if the character is a space, tab, newline, or vertical tab; 0 otherwise.
 */
int is_whitespace(char character);

/*
 * Function: palindrome
 * ------------------------
 *   Checks whether the given array of chars is palindrome.
 *
 *   s: the string to check (the array of chars we want to check).
 *
 *   returns: 1 if the array represents a palindrome; 0 otherwise.
 */
int palindrome(char s[size]);