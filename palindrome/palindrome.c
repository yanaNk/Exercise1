#include <stdio.h>
#include <string.h>
#include "data.h"

/*
* Program: Checks if palindrome
* Description:
*   Checks if a given string is a palindrome,the given string is passed by the user as a single input line.
*   Whitespaces characters like: tabs and spaces are ignored.
* Input:
*   String with max length of 80 entered by the user
* Output:
*   A message with the string the user entered.
*   Then on the next line a message indicating if the entered string is palindrome:
*   "It's a palindrome!" if the string is a palindrome.
*   "Not a palindrome" if the string is not palindrome.
*/



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

int main() {
  char input_string[ size ];
  printf("Hello please enter the string you are willing to check\n");
  fgets(input_string, size, stdin);
  printf("You have entered: %s\n", input_string);
  if (palindrome(input_string)) {
    printf("It's a palindrome!\n");
  } else {
    printf("Not a palindrome.\n");
  }
  return 0;
}

int is_whitespace(char character){
  const char whitespace_chars[] = {' ', '\t', '\n','\v','\r', '\f'};
  int j = 0;
  for(j = 0; j < sizeof(whitespace_chars); j++){
    if(whitespace_chars[j] == character) {
      return 1;
    }
  }
  return 0;
}


int palindrome(char s[]){
  int left_index = 0;
  int right_index = strlen(s) - 1;
  while(left_index < right_index){
    if(is_whitespace(s[left_index]) == 1) {
      left_index++;
      continue;

    }
    if(is_whitespace(s[right_index]) == 1) {
      right_index--;
      continue;

    }
    if(s[left_index] != s[right_index]){
      return 0;
    }
    left_index++;
    right_index--;
  }
  return 1;
}
