/*
 to run the script show the path to a file to read
 after it's compiled
 
 e.g. ./a.out < compund.c
 */

#include <stdio.h>

int main(void){
  
  int spaces = 0, digits = 0, letters = 0, others = 0;
  int c; //used for int value of character
  
  while ((c = getchar()) != EOF){
    if (c == ' ')
      ++spaces;
    else if (c >= '0' && c <= '9')
      ++digits;
    else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
      ++letters;
    else
      ++others;
  };
  
  printf(" blanks = %d, digits = %d, letters = %d,", spaces, digits, letters);
  printf(" others = %d\n\n", others);
  
  
  return 0;
}
