#include <stdio.h>
#include <string.h>

#define size 80

int is_whitespace(char c){
  const char whitespace_chars[3] = {' ', '\t', '\n'};
  int j=0;
  for(j=0;j<3;j++){
    if(whitespace_chars[j] == c) {
      return 1;
    }
  }
  return 0;
}


int palindrome(char s[size]){
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



int main() {
  char s[ size ];
  fgets(s, sizeof(s), stdin);
  if (palindrome(s)) {
    printf("It's a palindrome!\n");
  } else {
    printf("Not a palindrome.\n");
  }
}
